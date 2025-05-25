/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-24 17:14:54 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-24 17:14:54 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	validate_format(const char *format)
{
	if (format == NULL)
		return (-1);
	if (ft_strlen(format) == 0)
		return (-1);
	else
		return (0);
}

int	validate_format_specifier(int specifier)
{
	const char	*format_specifiers;

	format_specifiers = "cspdiuxX";
	if (ft_strchr(format_specifiers, specifier) == NULL)
		return (-1);
	else
		return (0);
}
