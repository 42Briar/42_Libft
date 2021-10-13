/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pvan-dij <pvan-dij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 20:47:47 by pvan-dij      #+#    #+#                 */
/*   Updated: 2021/10/13 12:03:47 by pvan-dij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*temp;
	t_list	*cur;

	if (!(*lst))
		return ;
	temp = NULL;
	while (temp != NULL)
	{	
		cur = *lst;
		temp = cur->next;
		del(cur->content);
		free(cur);
	}
	*lst = NULL;
}
