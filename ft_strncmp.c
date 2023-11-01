/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:38:04 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 14:45:29 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0 || !(s1 && s2))
		return (0);
	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i] && i < n - 1))
		i++;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
