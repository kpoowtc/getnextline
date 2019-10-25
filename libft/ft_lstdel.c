/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:12:44 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/19 14:31:04 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;
	t_list *ptrnext;

	ptr = *alst;
	while (ptr->next != NULL)
	{
		ptrnext = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = ptrnext;
	}
	del(ptr->content, ptr->content_size);
	free(ptr);
	*alst = NULL;
}
