/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:00:29 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/07 15:07:44 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	my_toupper(void *cd)
// {
// 	char	*c;

// 	c = cd;
// 	if (c[0] >= 'a' && c[0] <= 'z')
// 		c[0] = c[0] - 32;
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main ()
// {
// 	t_list *lst = ft_lstnew(ft_strdup("hello"));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("world")));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("how")));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("are")));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("you")));

// 	ft_lstiter(lst, my_toupper);

// 	while (lst != NULL)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// }