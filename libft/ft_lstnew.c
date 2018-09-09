/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:20:02 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 19:05:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ptr;

	ptr = NULL;
	if (!(ptr = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
		ptr->next = NULL;
		return (ptr);
	}
	else
	{
		ptr->content = ft_memalloc(content_size);
		ptr->content = ft_memcpy(ptr->content, content, content_size);
		ptr->content_size = content_size;
	}
	return (ptr);
}
