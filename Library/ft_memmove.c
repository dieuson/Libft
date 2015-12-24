/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvirgile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:41:09 by dvirgile          #+#    #+#             */
/*   Updated: 2015/12/02 14:09:35 by dvirgile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp;

	if (dst != NULL && src != NULL && len > 0)
	{
		temp = (char*)malloc(sizeof(temp) * len + 1);
		ft_memcpy(temp, (char*)src, len);
		ft_memcpy(dst, temp, len);
		free(temp);
		return (dst);
	}
	return (NULL);
}
