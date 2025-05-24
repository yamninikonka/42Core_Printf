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

#include "libftprintf.h"

void	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*format_specifiers;
	const char	*embedded_specifier_start_pos;
	char		*parsed_embedded_specifier;

	format_specifiers = "cspdiuxX";
	parsed_embedded_specifier = NULL;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				write(1, "%", 1);
			else
			{
				embedded_specifier_start_pos = format;
				while (ft_isalpha(*format) == 0)
				{
					format++;
				}
				if (ft_strchr(format_specifiers, *format) != NULL)
				{
					parsed_embedded_specifier = ft_substr(embedded_specifier_start_pos,
							0, (ft_strlen(embedded_specifier_start_pos)
								- ft_strlen(format)) + 1);
					parse_args(parsed_embedded_specifier, args);
					parsed_embedded_specifier = NULL;
				}
				// else
				// {
				// 	// raise error
				// }
			}
		}
		else
		{
			write(1, format, 1);
		}
		format++;
	}
	va_end(args);
}

int	main(void)
{
	// printf("------\n");
	ft_printf("---\n%c\n%s\n%d\n%i\n%u\n%x\n%X\n%%\n---\n", 't', "yamini", 21,
		12, -1, 21, 21);
}
