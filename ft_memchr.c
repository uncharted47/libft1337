/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:52:35 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 14:44:36 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (!mem)
		return (NULL);
	while (mem && mem[i] && i < n)
	{
		if (ptr[i] == c)
			return (mem + i);
	}
	return (mem);
}
