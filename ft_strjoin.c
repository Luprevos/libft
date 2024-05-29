/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:58:04 by luprevos          #+#    #+#             */
/*   Updated: 2024/05/08 14:40:19 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>

char	*ft_luka(char *c, const char *d)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;

	while (c[i] != '\0')
		i++;
	while (d[k] != '\0')
	{
		c[i] = d[k];
		i++;
		k++;
	}
	c[i] = '\0';
	return (c);

}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	len;

	i = -1;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(sizeof(char), (len +1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	return (str);
}
