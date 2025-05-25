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

static int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long int	num;
	char				*hexa_num;
	char				*joined_str;
	int					len;

	num = (unsigned long int)ptr;
	hexa_num = decimal_to_hexadecimal(num, 'x');
	// if (hexa_num == NULL)
	// {
	// 	return ;
	// }
	joined_str = ft_strjoin("0x", hexa_num);
	// write(1, result, ft_strlen(result));
	ft_putstr_fd(joined_str, fd);
	len = ft_strlen(joined_str);
	free(hexa_num);
	hexa_num = NULL;
	free(joined_str);
	joined_str = NULL;
	return (len);
}

int	char_group(char specifier, va_list args)
{
	char	*str;

	str = NULL;
	if (specifier == 'c')
	{
		// 'print character';
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (specifier == 's') // 's'
	{
		// 'print string';
		str = va_arg(args, char *);
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	else // 'p'
	{
		return (ft_putptr_fd(va_arg(args, void *), 1));
	}
}
