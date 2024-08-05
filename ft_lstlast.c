#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return NULL;
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
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

//     t_list *results = ft_lstlast(lst);
//     printf("%s\n", (char *)results->content);
// }