/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:01:11 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/10 12:44:40 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *del)
// {
// 	free(del);
// }

// void	*my_toupper(void *cd)
// {
// 	char	*c;

// 	c = cd;
// 	if (c[0] >= 'a' && c[0] <= 'z')
// 		c[0] = c[0] - 32;
// 	return (c);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;

	if (!f || !lst)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		temp = malloc(sizeof(t_list));
		if (!temp)
		{
			ft_lstclear(&newlst, (*del));
			return (NULL);
		}
		temp->content = f(lst->content);
		temp->next = NULL;
		ft_lstadd_back(&newlst, temp);
		lst = lst->next;
	}
	return (newlst);
}

// int main()
// {
// 	t_list *lst = ft_lstnew(ft_strdup("hello"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hi")));

// 	t_list *lst2 = ft_lstmap(lst, my_toupper, del);
	
// 	while(lst2)
// 	{
// 		printf("%s\n", (char *)lst2->content);
// 		lst2 = lst2->next;
// 	}
// }