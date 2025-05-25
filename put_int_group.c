/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_int_group.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-25 13:34:26 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-25 13:34:26 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexa_fd(int num, int fd)
{
	char	*hexa_str;

	hexa_str = decimal_to_hexadecimal(num, 'x');
	ft_putstr_fd(hexa_str, fd);
	free(hexa_str);
	hexa_str = NULL;
}
void	int_group(char specifier, va_list args)
{
	unsigned int	int_u;

	int_u = 0;
	if (specifier == 'd' || specifier == 'i')
	{
		// 'implement code logic to print integer';
		ft_putnbr_fd(va_arg(args, int), 1);
	}
	else if (specifier == 'x')
	{
		// 'print hexadecimal lowercase format';
	}
	else if (specifier == 'X')
	{
		// 'print hexadecimal uppercase format';
		// ft_putstr_fd(decimal_to_hexadecimal(va_arg(args, int), 'X'), 1);
		ft_puthexa_fd(va_arg(args, int), 1);
	}
	else // 'u'
	{
		// 'print unsigned decimal in base 10';
		int_u = (unsigned int)va_arg(args, int);
		ft_putnbr_fd(int_u, 1);
	}
}
