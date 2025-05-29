/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-29 16:02:31 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-29 16:02:31 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_args(char *specifiers, va_list args)
{
	char	specifier;

	specifier = specifiers[ft_strlen(specifiers) - 1];
	if (specifier == 'c' || specifier == 's' || specifier == 'p')
	{
		return (ft_putchars(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u')
	{
		return (ft_putints(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else if (specifier == 'x' || specifier == 'X')
	{
		return (ft_puthexaints(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else
		return (-1);
}
