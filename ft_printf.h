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

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		validate_format(const char *format);
int		validate_format_specifier(int specifier);
int		parse_specifier(const char *format, const char *specifier_start_pos,
			va_list args);
int		print_args(char *specifiers, va_list args);
int		ft_putchars(char specifier, va_list args);
int		ft_putstr(const char *str);
int		ft_putptr(void *ptr);
int		ft_putints(char specifier, va_list args);
int		ft_puthexaints(char specifier, va_list args);
char	*ft_uitoa(unsigned int num);
int		ft_puthexa(int num, char size);
char	*ft_decimaltohexa(int integer, char letter_size);
char	*ft_decimaltohexa_ptr(long integer, char letter_size);

#endif
