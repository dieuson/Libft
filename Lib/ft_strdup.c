/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvirgile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:32:16 by dvirgile          #+#    #+#             */
/*   Updated: 2015/12/03 17:36:52 by dvirgile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*ret;
	int		i;

	i = 0;
	ret = NULL;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	ret = (char *)malloc(sizeof(ret) * i + 1);
	if (ret == NULL)
		return (ret);
	i = 0;
	while (s[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
