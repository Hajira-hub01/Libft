/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:00:01 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/07 15:05:28 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *dlt)
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

// int main ()
// {
//     t_list *lst = ft_lstnew(ft_strdup("hello"));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("world")));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("how")));

//     ft_lstclear(&lst, del);
//     // if (lst == NULL)
//     // {
//     //     printf("Done clearing\n");
//     // }
//     while (lst != NULL)
//     {
//         printf("%s\n", lst->content);
//         lst = lst->next;
//     }
// }