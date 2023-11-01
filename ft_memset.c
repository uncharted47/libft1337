/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:22:27 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 14:16:44 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	if (mem == NULL)
		return (NULL);
	ptr = (unsigned char *)mem;
	i = 0;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return (mem);
}
