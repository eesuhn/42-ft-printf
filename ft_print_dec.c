/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:10:58 by yilim             #+#    #+#             */
/*   Updated: 2024/05/07 16:10:58 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_print_dec(va_list args)
{
	int		num;
	int		len;
	char	*dec;

	num = va_arg(args, int);
	dec = ft_itoa(num);
	len = ft_strlen(dec);
	ft_putstr_fd(dec, 1);
	free(dec);
	return (len);
}
