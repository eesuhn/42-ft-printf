/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:25:12 by yilim             #+#    #+#             */
/*   Updated: 2024/05/06 13:25:12 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_switch(char **s, va_list *args)
{
	char	*str;
	char	flag;

	str = *s;
	if (*str != '%')
		return (ft_putchar(*str));
	flag = *(str + 1);
	return (-1);
}
