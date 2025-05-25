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

static int	ft_putptr(void *ptr)
{
	unsigned long int	num;
	char				*hexa_num;
	char				*joined_str;
	int					len;

	num = (unsigned long int)ptr;
	hexa_num = decimal_to_hexadecimal_long(num, 'x');
	// if (hexa_num == NULL)
	// {
	// 	return ;
	// }
	joined_str = ft_strjoin("0x", hexa_num);
	// write(1, result, ft_strlen(result));
	len = ft_putstr(joined_str);
	free(hexa_num);
	hexa_num = NULL;
	free(joined_str);
	joined_str = NULL;
	return (len);
}

int	char_group(char specifier, va_list args)
{
	char	*str;
	int		c;

	str = NULL;
	c = '\0';
	if (specifier == 'c') // 'print character';
	{
		c = va_arg(args, int);
		return (write(1, &c, 1));
	}
	else if (specifier == 's') // 's' // 'print string';
	{
		// str = va_arg(args, char *);
		// if (str != NULL)
		// {
		// 	ft_putstr_fd(str, 1);
		// 	return (ft_strlen(str));
		// }
		// else
		// {
		// 	ft_putstr_fd("(null)", 1);
		// 	return (6);
		// }
		return (ft_putstr(va_arg(args, char *)));
	}
	else // 'p'
		return (ft_putptr(va_arg(args, void *)));
}
