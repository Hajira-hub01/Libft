#include "libft.h"

void del(void* dlt)
{
    free(dlt);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!del || !lst)
        return ;
    (*del) (lst->content);
    free(lst);
}

int main ()
{
    
}