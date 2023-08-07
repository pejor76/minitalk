/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:42:48 by pecampos          #+#    #+#             */
/*   Updated: 2022/07/06 10:55:27 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int		ft_char(int c);
int		ft_str(char *s);
int		ft_int(int num);
int		ft_hex(unsigned int num, int form);
int		ft_put_void(unsigned long long num);
int		ft_unsigned(unsigned int num);
int		ft_exception(void);
int		ft_control(char c, va_list arg);
int		ft_printf(char const *text, ...);
char	*ft_hexa(unsigned int n, int form);
char	ft_select_min(int res);
char	ft_select_may(int res);
int		ft_length(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_length_num(unsigned int n);
int		ft_len_void(unsigned long long n);
char	ft_select(int res);
char	*ft_void(unsigned long long n);
int		ft_len_num(int n);
int		ft_is_neg(int n);
int		ft_conv_pos(int n);
int		ft_special(int n);
char	*ft_itoa(int n);

#endif