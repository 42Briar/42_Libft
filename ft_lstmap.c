#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *temp;


	while (lst != NULL)
	{
		newlst->next = ft_lstnew(f(lst->content));


	}
}
