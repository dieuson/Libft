/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvirgile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:04:17 by dvirgile          #+#    #+#             */
/*   Updated: 2015/11/30 18:42:17 by dvirgile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*end;
	unsigned char		tmp;

	i = 0;
	tmp = (unsigned char)c;
	end = (unsigned char *)s;
	if (end)
	{
		while (n--)
		{
			if (end[i] == tmp)
				return ((void *)&end[i]);
			i++;
		}
	}
	return (NULL);
}
