/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:22:50 by marcpedr          #+#    #+#             */
/*   Updated: 2026/09/03 12:25:27 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	int		inside;

	words = 0;
	inside = 0;
	while (*s)
	{
		if (*s != c && !inside)
		{
			inside = 1;
			words++;
		}
		else if (*s == c)
			inside = 0;
		s++;
	}
	return (words);
}

static char	**ft_free_all(char **tab, size_t i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

static char	**ft_allocate_tab(char const *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	len;

	tab = ft_allocate_tab(s, c);
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		tab[i] = ft_substr(s, 0, len);
		if (!tab[i])
			return (ft_free_all(tab, i));
		s += len;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
