/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-06 12:49:24 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-06 12:49:24 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	// // char	*str;
	// // str = "%-0.# +";
	// printf("Characters: %c %c \n", 'a', 65);
	// printf("Decimals: %d %ld\n", 1977, 650000L);
	// printf("Preceding with blanks: %10d \n", 1977);
	// printf("Preceding with zeros: %010d \n", 1977);
	// printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100,
	// 	100);
	// printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	// printf("floats: %4.2F %+.0E %E \n", 3.1416, 3.1416, 3.1416);
	// printf("----------------------------------------\n");
	// printf("Width trick: %*d \n", 5, 10);
	// printf("Width trick: %0*d \n", 5, 10);
	// printf("Width trick: %10d \n", 10);
	// printf("Width trick: %010d \n", 10);
	// printf("----------------------------------------\n");
	// printf("Precision: %.3f\n", 12.23344556);
	// printf("Precision: %1.6f\n", 12.23344556);
	// printf("----------------------------------------\n");
	// printf("Precision: %4.4d\n", 12345566);
	// printf("Precision: %2.2f\n", 1234.12344);
	// printf("Precision: %.d\n", 0);
	// printf("----------------------------------------\n");
	// printf("Precision: %#x\n", 765);
	// printf("Precision: %#o\n", 765);
	// printf("Precision: %x\n", 765);
	// printf("Precision: %o\n", 765);
	// printf("Precision: %#X\n", 0);
	// printf("Precision: %#f\n", 1.0);
	// printf("----------------------------------------\n");
	// printf("mp: %05d---\n", 12);
	// printf("mp: %-5d000\n", 12);
	// printf("mp: %3d\n", 12345678);
	// printf("mp: %+d\n", 12);
	// printf("mp: %+d\n", -12);
	// printf("mp: ||%x||\n", 21);
	// printf("mp: ||%.x||\n", 21);
	// printf("mp: ||%.3d||\n", 211234566);
	// printf("mp: ||%.3d||\n", 21);
	// printf("mp: ||%05d||\n", 21);
	// printf("mp: ||%-5d||\n", 21);
	// printf("mp: ||%.5d||\n", 21);
	printf("big: %x\n", 2147483647);
	printf("big: %x\n", ~2147483647 + 1);
	// printf("big: %x\n", -2147483612);
	printf("big: %x\n", -2147483647);
	printf("big: %x\n", 2147);
	printf("big: %x\n", ~2147 + 1);
	// printf("big: %x\n", -2147483612);
	printf("big: %x\n", -2147);
	printf("0: %x\n", 0);
	printf("-1: %x\n", -1);
	printf("-2: %x\n", -2);
	printf("-9: %x\n", -9);
	printf("-10: %x\n", -10);
	printf("-15: %x\n", -15);
	printf("-16: %x\n", -16);
	printf("-17: %x\n", -17);
	printf("-2147: %x\n", -2147);
	printf("-2100: %x\n", -2100);
	printf("2100: %x\n", 2099);
	printf("big: %x\n", 2100345);
	// printf("num: %x\n", -21);
	// printf("num: %x\n", 21);
	// printf("num: %d\n", ~21);
	// printf("num: %x %x %x %x %x %x %x\n", 0, 1, 9, 10, 15, 16, 17);
	// printf("num: %x %x %x %x %x %x %x\n", 18, 25, 26, 31, 32, 41, 42);
	// printf("%d\n", 20 >> 3);
	// printf("%d\n", 20 >> 2);
	// printf("%d\n", 20 >> 1);
	// printf("%d\n", 20 << 1);
	// printf("%d\n", 20 << 2);
	// printf("%d\n", 20 << 3);
	// printf("%d\n", 25 >> 1);
	// // printf("----------------------------------------\n");
	// // printf("mp: %+d.,+- \n", -12);
	// // printf("%s \n", "A string");
	// // printf("%-2.f\n", 123.455);
	// // printf("%-3.f\n", 123.455);
	// // printf("%-1.4f\n", 123.455);
	// // printf("%-1.4f\n", 123.0);
	// // printf("%-1.4f\n", 123.);
	// /* printf("%-1.4d\n", 123.12); // Error
	// 							// printf("----------------------------------------\n");
	// 							// printf("%kslshkfhf%2245w");
	// 							// printf("%4-.d");
	// 							// Error handling when no specifier is compatible with handling ones. */
}
