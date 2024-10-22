/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <luprevos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:23:44 by luprevos          #+#    #+#             */
/*   Updated: 2024/10/22 14:41:38 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num && ((unsigned char *)ptr1)[i] == ((unsigned char *)ptr2)[i])
		i++;
	if (num == i)
		return (0);
	return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
}
/*
int	main(void)
{
	char s3[] = {0, 0, 42, 0};
	char s2[] = {0, 0, 127, 0};

	printf("%i", ft_memcmp(s2, s3, 4));
	printf("%i", memcmp(s2, s3, 4));
}*/
