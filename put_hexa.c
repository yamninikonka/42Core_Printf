/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-25 16:23:33 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-25 16:23:33 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned int integer)
{
	if (integer < 16 && integer >= 0) // (integer < 16 && integer >= -16)
		return (1);
	return (1 + get_size(integer / 16));
}

static char	hexadecimal_value(int index, char letter_size)
{
	if (index < 10)
		return ('0' + index);
	else
	{
		if (letter_size == 'x')
			return ('a' + (index - 10));
		else
			return ('A' + (index - 10));
	}
}

static char	*hexadecimal_positive(unsigned int integer, char letter_size,
		char *hexa)
{
	if (integer >= 16)
	{
		hexa = hexadecimal_positive(integer / 16, letter_size, hexa);
	}
	*hexa = hexadecimal_value(integer % 16, letter_size);
	return (hexa + 1);
}

char	*decimal_to_hexadecimal(int integer, char letter_size)
{
	char			*hexa;
	char			*end;
	unsigned int	num;

	num = (unsigned int)integer;
	hexa = malloc(sizeof(char) * (get_size(num) + 1));
	end = hexadecimal_positive(num, letter_size, hexa);
	*end = '\0';
	return (hexa);
}

int	puthexa(int num, char size)
{
	char	*hexa_str;
	int		len;

	hexa_str = decimal_to_hexadecimal(num, size);
	ft_putstr_fd(hexa_str, 1);
	len = ft_strlen(hexa_str);
	free(hexa_str);
	hexa_str = NULL;
	return (len);
}
