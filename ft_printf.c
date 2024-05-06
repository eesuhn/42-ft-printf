/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:23:23 by yilim             #+#    #+#             */
/*   Updated: 2024/04/29 15:23:23 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		cur_res;
	char	*s;

	va_start(args, str);
	len = 0;
	s = (char *)str;
	while (*s)
	{
		cur_res = ft_switch(&s, &args);
		if (cur_res == -1)
		{
			va_end(args);
			return (-1);
		}
		len += cur_res;
		if (*s == '%')
			s++;
		s++;
	}
	va_end(args);
	return (len);
}
