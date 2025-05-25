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

int	int_group(char specifier, va_list args)
{
	char	*str;
	int		num;

	num = va_arg(args, int);
	if (specifier == 'd' || specifier == 'i')
	{
		// 'implement code logic to print integer';
		ft_putnbr_fd(num, 1);
	}
	else // 'u'
	{
		// 'print unsigned decimal in base 10';
		ft_putnbr_fd((unsigned int)num, 1);
	}
	return (ft_strlen(ft_itoa(num))); // careful with neg nums
}

int	put_ints_in_hexa(char specifier, va_list args)
{
	if (specifier == 'x')
	{
		// 'print hexadecimal lowercase format';
		return (puthexa(va_arg(args, int), 'x'));
	}
	else // 'X'
	{
		// 'print hexadecimal uppercase format';
		// ft_putstr_fd(decimal_to_hexadecimal(va_arg(args, int), 'X'), 1);
		return (puthexa(va_arg(args, int), 'X'));
	}
}
