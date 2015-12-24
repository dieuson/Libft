/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvirgile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:36:00 by dvirgile          #+#    #+#             */
/*   Updated: 2015/12/03 17:35:48 by dvirgile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*fraiche;
	int		i;
	int		e;

	if (s == NULL || f == NULL)
		return (NULL);
	fraiche = NULL;
	i = 0;
	e = 0;
	while (s[i])
		i++;
	fraiche = (char *)malloc(sizeof(s) * i);
	while (s[e])
	{
		fraiche[e] = f(s[e]);
		e++;
	}
	return (fraiche);
}
