/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 09:51:44 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-04 09:51:44 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void	var_func(char *s, ...)
{
	va_list	v_lst;
	char	*arg;
	int		i;

	va_start(v_lst, s);
	arg = va_arg(v_lst, char *);
	while (*s)
	{
		if (*s != '%')
		{
			printf("%c", *s);
		}
		else
		{
			s++;
			if (*s == 's')
			{
				printf("%s", arg);
				arg = va_arg(v_lst, char *);
			}
			else
			{
				i = va_arg(v_lst, int);
				printf("---");
			}
		}
		s++;
	}
	printf("\n");
	va_end(v_lst);
}

int	main(void)
{
	var_func("this is a %s, place where %d can learn %s!!!", "42HN", 0, "code");
}
