/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-10 16:10:26 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-10 16:10:26 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"
#include <stdio.h>

int	ft_printf(const char *format, ...);
int	validate_format(const char *format);
int	validate_format_specifier(int specifier);
int	parse_format_specifier(const char *format, const char *specifier_start_pos,
	va_list args);
int	print_args(char *specifiers, va_list args);
void	char_group(char specifier, va_list args);
void	int_group(char specifier, va_list args);
char	*decimal_to_hexadecimal(long integer, char letter_size);

#endif
