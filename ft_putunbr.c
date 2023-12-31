/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:30 by zderfouf          #+#    #+#             */
/*   Updated: 2023/12/05 19:58:43 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n, int i)
{
	if (n > 9)
		i = ft_putunbr(n / 10, i);
	i += ft_putchar(n % 10 + '0');
	return (i);
}
