/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcpedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 15:50:34 by marcpedr          #+#    #+#             */
/*   Updated: 2026/08/07 15:57:13 by marcpedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_no;

	new_no = (t_list *)malloc(sizeof(t_list));
	if (!new_no)
		return (NULL);
	new_no->content = content;
	new_no->next = NULL;
	return (new_no);
}
