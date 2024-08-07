/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:01:00 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/07 15:03:01 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
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