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

int	uint_len(unsigned int num)
{
	int	count;

	count = 0;
	while (num > 9)
	{
		count++;
		num /= 10;
	}
	count++;
	return (count);
}
static char	*uitoa(unsigned int num)
{
	char	*uint_str;
	int		len;

	len = uint_len(num) + 1;
	uint_str = malloc(len-- * sizeof(char));
	uint_str[len--] = '\0';
	while (num > 9)
	{
		uint_str[len--] = '0' + num % 10;
		num /= 10;
	}
	uint_str[len] = '0' + num;
	return (uint_str);
}

int	puthexa(int num, char size)
{
	char	*hexa_str;
	int		len;

	hexa_str = decimal_to_hexadecimal(num, size);
	len = ft_putstr(hexa_str);
	free(hexa_str);
	hexa_str = NULL;
	return (len);
}

int	int_group(char specifier, va_list args)
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
		str = uitoa(num);
	}
	num = ft_putstr(str);
	free(str);
	str = NULL;
	return (num); // careful with neg nums
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
