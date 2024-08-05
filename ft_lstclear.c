#include "libft.h"

void del(void* dlt)
{
    free(dlt);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del || !lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
}