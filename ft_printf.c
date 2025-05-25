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

static int	format_len(const char *format)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format != '%')
			count++;
		format++;
	}
	return (count);
}

static int	print_formatted_data_to_stdout(const char *format, va_list args)
{
	const char	*specifier_start_pos;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				write(1, "%", 1);
			else
			{
				specifier_start_pos = format;
				while (ft_isalpha(*format) == 0)
					format++;
				if (parse_format_specifier(format, specifier_start_pos,
						args) < 0)
					return (-1);
			}
		}
		else
			write(1, format, 1);
		format++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	if (validate_format(format) >= 0)
	{
		if (print_formatted_data_to_stdout(format, args) >= 0)
			return (format_len(format));
		else
			return (-1);
	}
	else
		return (-1);
	va_end(args);
}
