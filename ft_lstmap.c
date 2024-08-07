#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;

	if (!f || !lst)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		temp = malloc(sizeof(t_list));
		if (!temp)
		{
			ft_lstclear(&newlst, (*del));
			return (NULL);
		}
		temp->content = f(lst->content);
		temp->next = NULL;
		ft_lstadd_back(&newlst, temp);
		lst = lst->next;
	}
	return (newlst);
}
