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

static const char	*print_specifier(const char *format, int *count,
		va_list args)
{
	int			written;
	const char	*specifier_start_pos;

	specifier_start_pos = format;
	while (ft_isalpha(*format) == 0)
		format++;
	written = parse_specifier(format, specifier_start_pos, args);
	if (written < 0)
		*count = -1;
	*count += written;
	return (format);
}

static void	print_char(char c, int *count)
{
	if (write(1, &c, 1) < 0)
		*count = -1;
	else
		*count = *count + 1;
}

static int	print_formatted_data_to_stdout(const char *format, va_list args)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				if (print_char(*format, &count), count < 0)
					return (-1);
			}
			else if (format = print_specifier(format, &count, args), count < 0)
				return (-1);
		}
		else if (print_char(*format, &count), count < 0)
			return (-1);
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	if (validate_format(format) >= 0)
	{
		return (va_end(args), print_formatted_data_to_stdout(format, args));
	}
	else
		return (va_end(args), -1);
}
