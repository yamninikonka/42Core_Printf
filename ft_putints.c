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
		str = ft_itoa(num);
	}
	else
	{
		str = ft_uitoa(num);
	}
	if (!str)
		return (-1);
	num = ft_putstr(str);
	free(str);
	str = NULL;
	return (num);
}

int	ft_puthexaints(char specifier, va_list args)
{
	if (specifier == 'x')
	{
		return (ft_puthexa(va_arg(args, int), 'x'));
	}
	else
	{
		return (ft_puthexa(va_arg(args, int), 'X'));
	}
}
