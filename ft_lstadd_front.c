/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:59:52 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/07 14:59:55 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		*lst = new;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *lst;
// 	lst = ft_lstnew("hello");
// 	printf("before new added: %s\n", (char *)lst->content);
// 	ft_lstadd_front(&lst, ft_lstnew("hii"));

// 	printf("after new added: %s\n", (char *)lst->content);
// 	lst = lst->next;
// 	printf("%s", (char *)lst->content);
// }