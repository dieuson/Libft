/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvirgile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:18:31 by dvirgile          #+#    #+#             */
/*   Updated: 2015/12/03 17:35:26 by dvirgile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fraiche;
	int		i;
	int		e;

	fraiche = NULL;
	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	e = 0;
	while (s[i])
		i++;
	fraiche = (char *)malloc(sizeof(s) * i);
	while (s[e])
	{
		fraiche[e] = f(e, s[e]);
		e++;
	}
	return (fraiche);
}
