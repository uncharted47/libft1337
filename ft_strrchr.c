/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:20:38 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 14:45:35 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sub)
{
	int		i;
	char	*result;

	i = 0;
	result = NULL;
	while (str && str[i])
	{
		if (str[i] == sub)
			result = (char *)&str[i];
		i++;
	}
	return (result);
}
