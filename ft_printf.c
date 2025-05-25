/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-03 14:56:49 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-03 14:56:49 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	format_len(const char *format)
// {
// 	int	count;

// 	count = 0; // original prinf returns format_len+1, i.e; count starts from 1
// 	while (*format)
// 	{
// 		count++;
// 		if (*format == '%')
// 		{
// 			format++;
// 			if (ft_isalpha(*format) == 1)
// 				count++;
// 		}
// 		format++;
// 	}
// 	return (count);
// }

static int	print_formatted_data_to_stdout(const char *format, va_list args)
{
	const char	*specifier_start_pos;
	int			count;
	int			written;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				written = write(1, "%", 1);
				count++;
				if (written < 0)
					return (written);
			}
			else
			{
				specifier_start_pos = format;
				while (ft_isalpha(*format) == 0)
					format++;
				written = parse_format_specifier(format, specifier_start_pos,
						args);
				if (written < 0)
					return (written);
				else
					count = count + written;
			}
		}
		else
		{
			written = write(1, format, 1);
			count++;
			if (written < 0)
				return (written);
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	if (validate_format(format) > 0)
	{
		return (va_end(args), print_formatted_data_to_stdout(format, args));
	}
	else if (validate_format(format) == 0)
		return (va_end(args), 0);
	else
		return (va_end(args), -1);
	// va_end(args);
}

// int	main(void)
// {
// 	ft_printf("%%%c", 'x');
// }
