/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-08 17:10:55 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-08 17:10:55 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static int	get_size(unsigned int integer)
{
	if (integer < 16 && integer >= 0) // (integer < 16 && integer >= -16)
		return (1);
	return (1 + get_size(integer / 16));
}

static char	hexadecimal_value(int index, char letter_size)
{
	// printf("enter:: %d\n", index);
	// if (index < 0)
	// {
	// 	index = 16 + index;
	// 	printf("<0:: %d\n", index);
	// }
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
	// printf("%c - each char\n", *hexa);
	return (hexa + 1);
}

// static int	hexadecimal_negative(int integer, char letter_size, char *hexa,
// 		int pos)
// {
// 	printf("neg mod:: %d %d\n", integer, integer % 16);
// 	if (integer < -16)
// 	{
// 		pos = hexadecimal_negative((integer / 16) - 1, letter_size, hexa, pos);
// 	}
// 	hexa[pos] = hexadecimal_value(integer % 16, letter_size);
// 	// printf("%c - each char\n", hexa[pos]);
// 	return (pos + 1);
// }

char	*decimal_to_hexadecimal(int integer, char letter_size)
{
	char			*hexa;
	char			*end;
	unsigned int	num;

	// int				pos;
	num = (unsigned int)integer;
	hexa = malloc(sizeof(char) * (get_size(num) + 1));
	end = hexadecimal_positive(num, letter_size, hexa);
	// printf("%d == ", get_size(integer));
	*end = '\0'; // points to last block
	return (hexa);
}

/* int	main(void)
{
	char	*h;

	h = decimal_to_hexadecimal(-2147, 'x'); // 834
	printf("%s", h);
	// free(h);
} */
