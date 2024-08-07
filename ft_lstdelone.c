#include "libft.h"

// void del(void* dlt)
// {
//     free(dlt);
// }

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!del || !lst)
        return ;
    (*del)(lst->content);
    free(lst);
}

// int main ()
// {
//     t_list *lst = ft_lstnew("hello");
//     ft_lstadd_front(&lst, ft_lstnew("world"));
// 	ft_lstadd_front(&lst, ft_lstnew("how"));
//     t_list *temp = lst;
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }    
//     ft_lstdelone(lst, del);
//     if (temp)
//     {
//         temp = temp->next;
//         printf("%s\n", temp->content);
//     }  

// }