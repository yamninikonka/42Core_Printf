/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char_group.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-25 13:34:09 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-25 13:34:09 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchars(char specifier, va_list args)
{
	char	*str;
	int		c;

	str = NULL;
	c = '\0';
	if (specifier == 'c')
	{
		c = va_arg(args, int);
		return (write(1, &c, 1));
	}
	else if (specifier == 's')
	{
		return (ft_putstr(va_arg(args, char *)));
	}
	else
		return (ft_putptr(va_arg(args, void *)));
}

int	ft_putstr(const char *str)
{
	if (str != NULL)
	{
		return (write(1, str, ft_strlen(str)));
	}
	else
	{
		return (write(1, "(null)", 6));
	}
}

int	ft_putptr(void *ptr)
{
	unsigned long int	num;
	char				*hexa_num;
	char				*joined_str;
	int					len;

	num = (unsigned long int)ptr;
	hexa_num = ft_decimaltohexa_ptr(num, 'x');
	if (!hexa_num)
		return (-1);
	joined_str = ft_strjoin("0x", hexa_num);
	free(hexa_num);
	hexa_num = NULL;
	if (!joined_str)
		return (-1);
	len = ft_putstr(joined_str);
	free(joined_str);
	joined_str = NULL;
	return (len);
}
