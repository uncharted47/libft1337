/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:25:47 by elyzouli          #+#    #+#             */
/*   Updated: 2023/11/01 15:24:16 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int		isalpha(int car);
int		isdigit(int car);
int		ft_isalnum(int car);
int		ft_isascii(int car);
int		ft_isprint(int c);
int		ft_toupper(int car);
int		ft_tolower(int car);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *mem, int c, size_t n);
void	*ft_bzero(void *mem, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *mem, int c, size_t n);
void	*ft_memset(void *mem, int c, size_t n);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int sub);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*ft_strdup(char *str);

#endif
