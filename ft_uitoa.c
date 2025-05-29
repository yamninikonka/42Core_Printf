/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-29 10:26:07 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-29 10:26:07 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	uint_len(unsigned int num)
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
char	*ft_uitoa(unsigned int num)
{
	char	*uint_str;
	int		len;

	len = uint_len(num) + 1;
	uint_str = malloc(len-- * sizeof(char));
	if (!uint_str)
		return (NULL);
	uint_str[len--] = '\0';
	while (num > 9)
	{
		uint_str[len--] = '0' + num % 10;
		num /= 10;
	}
	uint_str[len] = '0' + num;
	return (uint_str);
}
