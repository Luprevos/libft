/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:31:36 by luprevos          #+#    #+#             */
/*   Updated: 2024/04/25 15:28:15 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) s)[i] = (char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char arr[5] = {'a','b','t','k','\0'};
	char z = 'l';
	printf("%s", ft_memset(arr, z, 1));
}*/
