/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 08:28:51 by marcpedr          #+#    #+#             */
/*   Updated: 2026/08/03 08:32:04 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	cont;

	if (!s)
		return ;
	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	write(fd, s, cont);
}
