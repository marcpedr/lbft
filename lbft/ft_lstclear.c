/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 01:21:55 by marcpedr          #+#    #+#             */
/*   Updated: 2026/08/08 02:07:35 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*no_atual;
	t_list	*proximo_no;

	if (!lst || !del)
		return ;
	no_atual = *lst;
	while (no_atual != NULL)
	{
		proximo_no = no_atual->next;
		ft_lstdelone(no_atual, del);
		no_atual = proximo_no;
	}
	*lst = NULL;
}
