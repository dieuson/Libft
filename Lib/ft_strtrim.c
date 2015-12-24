/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvirgile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:35:49 by dvirgile          #+#    #+#             */
/*   Updated: 2015/12/03 17:33:28 by dvirgile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*s2;
	int		i;
	int		e;
	int		l;

	l = 0;
	e = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (!(s2 = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
		e++;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
		i--;
	while (e <= i)
		s2[l++] = s[e++];
	s2[l] = '\0';
	return (s2);
}
