/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:37:05 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 15:07:11 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*skipwhitespaces(const char *number, int *sign)
{
	while (*number == '\t' || *number == '\n' || *number == ' ')
		number++;
	if (*number == '-' || number == '+')
	{
		if (*number == '-')
			*sign = -1;
	}
	return (number);
}

int	ft_atoi(const char *num)
{
	int					sign;
	unsigned long long	n;
	int					i;

	if (num == NULL)
		return (0);
	n = 0;
	sign = 1;
	num = skipwhitespaces(num, &sign);
	while (ft_isdigit(num[i]))
	{
		n = n * 10 + (num[i++] - '0');
		if (n > LLONG_MAX && sign == 1)
			return (-1);
		if (n > LLONG_MAX && sign == -1)
			return (0);
	}
	return (n);
}
