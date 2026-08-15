/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:32:34 by marcpedr          #+#    #+#             */
/*   Updated: 2026/08/02 18:32:34 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*memory;
	size_t	size_str;
	size_t	i;

	if (!s)
		return (NULL);
	size_str = ft_strlen(s);
	if (start >= size_str)
		len = 0;
	else if (len > size_str - start)
		len = size_str - start;
	memory = (char *)malloc(sizeof(char) * (len + 1));
	if (!memory)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		memory[i] = s[start + i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
