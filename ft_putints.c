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

int	ft_putints(char specifier, va_list args)
{
	int		num;
	char	*str;

	num = va_arg(args, int);
	if (specifier == 'd' || specifier == 'i')
	{
		// 'implement code logic to print integer';
		str = ft_itoa(num);
	}
	else // 'u'
	{
		// 'print unsigned decimal in base 10';
		str = ft_uitoa(num);
	}
	if (!str)
		return (-1);
	num = ft_putstr(str);
	free(str);
	str = NULL;
	return (num); // careful with neg nums
}

int	ft_puthexaints(char specifier, va_list args)
{
	if (specifier == 'x')
	{
		// 'print hexadecimal lowercase format';
		return (ft_puthexa(va_arg(args, int), 'x'));
	}
	else // 'X'
	{
		// 'print hexadecimal uppercase format';
		// ft_putstr_fd(decimal_to_hexadecimal(va_arg(args, int), 'X'), 1);
		return (ft_puthexa(va_arg(args, int), 'X'));
	}
}
