/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 02:38:30 by marcpedr          #+#    #+#             */
/*   Updated: 2026/08/08 03:45:59 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nova_lista;
	t_list	*novo_no;
	void	*conteudo_modificado;

	if (!lst || !f || !del)
		return (NULL);
	nova_lista = NULL;
	while (lst != NULL)
	{
		conteudo_modificado = f(lst->content);
		novo_no = ft_lstnew(conteudo_modificado);
		if (!novo_no)
		{
			del(conteudo_modificado);
			ft_lstclear(&nova_lista, del);
			return (NULL);
		}
		ft_lstadd_back(&nova_lista, novo_no);
		lst = lst->next;
	}
	return (nova_lista);
}
