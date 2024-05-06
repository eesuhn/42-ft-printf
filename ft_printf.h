/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:23:21 by yilim             #+#    #+#             */
/*   Updated: 2024/04/29 15:23:21 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_switch(char **s, va_list *args);
int	ft_putchar(char c);
int	ft_print_char(va_list *args);
int	ft_putstr(char *str);
int	ft_print_str(va_list *args);

#endif
