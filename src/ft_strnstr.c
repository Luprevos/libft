/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <luprevos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:43:54 by luprevos          #+#    #+#             */
/*   Updated: 2024/10/22 14:42:54 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *large, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(small[i]))
		return ((char *)large);
	while (i < len && large[i])
	{
		j = 0;
		if (large[i] == small[j])
		{
			while (small[j] == large[i + j] && (i + j) < len)
				j++;
			if (small[j] == '\0')
				return ((char *)large + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char *cac = ft_strnstr("lorem ipsum dolor sit amet", "consect  etur", 30);
	printf("%s", strnstr("lorem ipsum dolor sit amet", "consec   tetur", 30));
	printf("cac=%s", cac);
	return (0);
}*/
