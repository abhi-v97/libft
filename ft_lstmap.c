
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *node;

	if (lst == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	node = NULL;
	while (lst)
	{
		if (f == NULL)
			node = ft_lstnew(lst->content);
		else
			node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&new_lst, node);
			lst = lst->next;
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}