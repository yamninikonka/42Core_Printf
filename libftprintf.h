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

char	*decimal_to_hexadecimal(int integer, char letter_size);
void	parse_args(char *specifier, va_list args);
void	validate_format(const char *format);

#endif
