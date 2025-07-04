/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-10 16:09:19 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-10 16:09:19 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"
#include <stdio.h>

void	negative_numbers(void)
{
	char	*h;

	h = decimal_to_hexadecimal(-1, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-1), "      :: "), h), 0);
	printf("        ::  %x\n", -1);
	h = decimal_to_hexadecimal(-2, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-2), "      :: "), h), 0);
	printf("        ::  %x\n", -2);
	h = decimal_to_hexadecimal(-9, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-9), "      :: "), h), 0);
	printf("        ::  %x\n", -9);
	h = decimal_to_hexadecimal(-10, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-10), "      :: "), h), 0);
	printf("        ::  %x\n", -10);
	h = decimal_to_hexadecimal(-15, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-15), "      :: "), h), 0);
	printf("        ::  %x\n", -15);
	h = decimal_to_hexadecimal(-16, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-16), "      :: "), h), 0);
	printf("        ::  %x\n", -16);
	h = decimal_to_hexadecimal(-17, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-17), "      :: "), h), 0);
	printf("        ::  %x\n", -17);
	h = decimal_to_hexadecimal(-2147, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-2147), "      :: "), h), 0);
	printf("        ::  %x\n", -2147);
	h = decimal_to_hexadecimal(-2100, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-2100), "      :: "), h), 0);
	printf("        ::  %x\n", -2100);
	h = decimal_to_hexadecimal(-124556000, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-124556000), "      :: "), h),
		0);
	printf("        ::  %x\n", -124556000);
	h = decimal_to_hexadecimal(-210003210, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-210003210), "      :: "), h),
		0);
	printf("        ::  %x\n", -210003210);
	h = decimal_to_hexadecimal(-2100000000, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-2100000000), "      :: "), h),
		0);
	printf("        ::  %x\n", -2100000000);
	h = decimal_to_hexadecimal(-2147483646, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-2147483646), "      :: "), h),
		0);
	printf("        ::  %x\n", -2147483646);
	h = decimal_to_hexadecimal(-2147483647, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(-2147483647), "      :: "), h),
		0);
	printf("        ::  %x\n", -2147483647);
}
void	positive_numbers(void)
{
	char	*h;

	h = decimal_to_hexadecimal(0, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(0), "      :: "), h), 0);
	printf("        ::  %x\n", 0);
	h = decimal_to_hexadecimal(1, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(1), "      :: "), h), 0);
	printf("        ::  %x\n", 1);
	h = decimal_to_hexadecimal(2, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(2), "      :: "), h), 0);
	printf("        ::  %x\n", 2);
	h = decimal_to_hexadecimal(9, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(9), "      :: "), h), 0);
	printf("        ::  %x\n", 9);
	h = decimal_to_hexadecimal(10, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(10), "      :: "), h), 0);
	printf("        ::  %x\n", 10);
	h = decimal_to_hexadecimal(15, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(15), "      :: "), h), 0);
	printf("        ::  %x\n", 15);
	h = decimal_to_hexadecimal(16, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(16), "      :: "), h), 0);
	printf("        ::  %x\n", 16);
	h = decimal_to_hexadecimal(17, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(17), "      :: "), h), 0);
	printf("        ::  %x\n", 17);
	h = decimal_to_hexadecimal(2147, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(2147), "      :: "), h), 0);
	printf("        ::  %x\n", 2147);
	h = decimal_to_hexadecimal(2100, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(2100), "      :: "), h), 0);
	printf("        ::  %x\n", 2100);
	h = decimal_to_hexadecimal(124556000, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(124556000), "      :: "), h), 0);
	printf("        ::  %x\n", 124556000);
	h = decimal_to_hexadecimal(210003210, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(210003210), "      :: "), h), 0);
	printf("        ::  %x\n", 210003210);
	h = decimal_to_hexadecimal(2100000000, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(2100000000), "      :: "), h),
		0);
	printf("        ::  %x\n", 2100000000);
	h = decimal_to_hexadecimal(2147483646, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(2147483646), "      :: "), h),
		0);
	printf("        ::  %x\n", 2147483646);
	h = decimal_to_hexadecimal(2147483647, 'x'); // 834
	ft_putstr_fd(ft_strjoin(ft_strjoin(ft_itoa(2147483647), "      :: "), h),
		0);
	printf("        ::  %x\n", 2147483647);
}
int	main(void)
{
	/* on terminal:
	cc -Wall -Wextra -Werror
		-fsanitize=address tests/hexadecimal_test.c hexadecimal.c libft/ft_putstr_fd.c libft/ft_putchar_fd.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_strjoin.c libft/ft_itoa.c */
	ft_putstr_fd("------ Neg Num ------\nNum        ft_printf        printf\n------------------------------------------\n",
		0);
	negative_numbers();
	ft_putstr_fd("------ Pos Num ------\nNum        ft_printf        printf\n------------------------------------------\n",
		0);
	positive_numbers();
}
