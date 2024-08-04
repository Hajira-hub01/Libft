/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:53:34 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/04 19:23:37 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int main ()
// {
// 	t_list *list_char = ft_lstnew((char *)"hello");
// 	printf("when a char: %s\n", (char *)list_char->content);
// 	t_list *list_int = ft_lstnew((int *)123);
// 	printf("when an int: %d\n", (int)list_int->content);
// }