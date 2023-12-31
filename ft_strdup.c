/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:17:26 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 15:18:53 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	if (str == NULL)
		return (NULL);
	size = ft_strlen((char *)str);
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	while (str[i])
		dup[i++] = str[i];
	dup[i] = '\0';
	return (dup);
}
