/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-25 14:49:18 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-25 14:49:18 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
cc -Wall -Wextra -Werror -fsanitize=address
	-g ft_printf.c parser.c libft/ft_substr.c libft/ft_strchr.c libft/ft_strlen.c libft/ft_isalpha.c libft/ft_putnbr_fd.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_calloc.c libft/ft_bzero.c put_hexa.c main.c validate.c specifiers.c put_chars.c put_ints.c libft/ft_strjoin.c libft/ft_itoa.c
*/

// int	print_uint(unsigned int num)
// {
// 	if (num > 9)
// 	{
// 		return (print_uint(num / 10) + (ft_putchar_fd('0' + (num % 10), 1), 1));
// 	}
// 	else
// 	{
// 		return (ft_putchar_fd('0' + num, 1), 1);
// 	}
// }

int	main(void)
{
	int	*ptr;
	int	n;

	// int	r;
	// r = ft_printf("---%%%s%c%u---", "hg", 'c', -21);
	// ft_printf("%d\n", r);
	// printf("---%%%s%c%u---", "hg", 'c', -21);
	// r = printf("---%%%s%c---", "hg", 'c');
	// printf("%d", r);
	// print_uint((unsigned int)(-21));
	// write(1, "\n", 1);
	// print_uint((unsigned int)(0));
	// write(1, "\n", 1);
	// printf("--%d--\n", print_uint((unsigned int)(4294967291)));
	// write(1, "\n", 1);
	// print_uint((unsigned int)(-1));
	// ft_printf("akhdhjsa ---%x%s---adhbnkajnjd%p\n", -10, NULL,
	// (void *)-1234);
	// printf("akhdhjsa ---%x%s---adhbnkajnjd%p\n", -10, NULL, (void *)-1234);
	// ft_printf("akhdhjsa ---%x%s---adhbnkajnjd%p%s\n", -10, NULL,
	// (void *)1234,
	// 	"\0\f\r\0");
	// printf("akhdhjsa ---%x%s---adhbnkajnjd%p%s\n", -10, NULL, (void *)1234,
	// 	"\0\f\r");
	n = 34;
	ptr = &n;
	ft_printf("%c-%s-%d-%i-%u-%p-%x-%X-%%\n", 'x', "yamini", 21, 12, -21, ptr,
		230082, 230082);
	printf("%c-%s-%d-%i-%u-%p-%x-%X-%%\n", 'x', "yamini", 21, 12, -21, ptr,
		230082, 230082);
	ft_printf("%x\n", -200000);
	printf("%x\n", -200000);
}
