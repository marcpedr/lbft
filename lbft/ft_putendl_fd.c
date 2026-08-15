/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 12:13:57 by marcpedr          #+#    #+#             */
/*   Updated: 2026/08/03 12:14:52 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	cont;

	if (!s)
		return ;
	cont = 0;
	while (s[cont])
		cont++;
	write(fd, s, cont);
	write(fd, "\n", 1);
}
