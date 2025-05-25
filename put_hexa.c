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

static int	get_size(unsigned long integer)
{
	if (integer < 16 && integer >= 0) // (integer < 16 && integer >= -16)
		return (1);
	return (1 + get_size(integer / 16));
}

// static char	hexadecimal_value(int index, char letter_size)
// {
// 	if (index < 10)
// 		return ('0' + index);
// 	else
// 	{
// 		if (letter_size == 'x')
// 			return ('a' + (index - 10));
// 		else
// 			return ('A' + (index - 10));
// 	}
// }

static char	*hexadecimal_positive(unsigned int integer, char letter_size,
		char *hexa)
{
	if (integer >= 16)
	{
		hexa = hexadecimal_positive(integer / 16, letter_size, hexa);
	}
	// *hexa = hexadecimal_value(integer % 16, letter_size);
	if (integer % 16 < 10)
		*hexa = '0' + integer % 16;
	else
	{
		if (letter_size == 'x')
			*hexa = 'a' + (integer % 16 - 10);
		else
			*hexa = 'A' + (integer % 16 - 10);
	}
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

static char	*hexadecimal_positive_long(unsigned long integer, char letter_size,
		char *hexa)
{
	if (integer >= 16)
	{
		hexa = hexadecimal_positive_long(integer / 16, letter_size, hexa);
	}
	// *hexa = hexadecimal_value(integer % 16, letter_size);
	if (integer % 16 < 10)
		*hexa = '0' + integer % 16;
	else
	{
		if (letter_size == 'x')
			*hexa = 'a' + (integer % 16 - 10);
		else
			*hexa = 'A' + (integer % 16 - 10);
	}
	return (hexa + 1);
}

char	*decimal_to_hexadecimal_long(long integer, char letter_size)
{
	char			*hexa;
	char			*end;
	unsigned long	num;

	num = (unsigned long)integer;
	hexa = malloc(sizeof(char) * (get_size(num) + 1));
	end = hexadecimal_positive_long(num, letter_size, hexa);
	*end = '\0';
	return (hexa);
}
