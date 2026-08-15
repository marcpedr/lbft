/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 17:54:59 by marcpedr          #+#    #+#             */
/*   Updated: 2026/07/31 18:26:41 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_cont;
	size_t	src_cont;
	size_t	i;

	if (!dst || !src)
		return (0);
	dst_cont = 0;
	while (dst[dst_cont] != '\0' && dst_cont < size)
		dst_cont++;
	src_cont = 0;
	while (src[src_cont] != '\0')
		src_cont++;
	if (dst_cont == size)
		return (size + src_cont);
	i = 0;
	while (src[i] != '\0' && (dst_cont + i) < (size -1))
	{
		dst[dst_cont + i] = src [i];
		i++;
	}
	dst[dst_cont + i] = '\0';
	return (dst_cont + src_cont);
}
