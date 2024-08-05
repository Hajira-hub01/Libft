#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *lst = ft_lstnew("hello");
//     ft_lstadd_front(&lst, ft_lstnew("dsad"));
//     ft_lstadd_front(&lst, ft_lstnew("dsad"));
//     ft_lstadd_front(&lst, ft_lstnew("dsad"));
//     ft_lstadd_front(&lst, ft_lstnew("dsad"));
//     ft_lstadd_front(&lst, ft_lstnew("dsad"));
//     ft_lstadd_front(&lst, ft_lstnew("dsad"));

//     int result = ft_lstsize(lst);
//     printf("%d\n", result);
// }
