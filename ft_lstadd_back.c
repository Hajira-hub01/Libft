#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

	if (!new)
    	return ;
	if (!*lst)
		*lst = new;
    else
		ft_lstlast(*lst)->next = new;
}

int main(void)
{
	t_list *lst;
	lst = ft_lstnew("hello");
	ft_lstadd_back(&lst, ft_lstnew("hii"));
	printf("before new added: %s\n", (char *)lst->content);
	ft_lstadd_back(&lst, ft_lstnew("hii"));
	ft_lstadd_back(&lst, ft_lstnew("hii"));
	ft_lstadd_back(&lst, ft_lstnew("hii"));
	ft_lstadd_back(&lst, ft_lstnew("hiijhgjghj"));

    lst = ft_lstlast(lst);
	printf("after new added: %s\n", (char *)lst->content);
}