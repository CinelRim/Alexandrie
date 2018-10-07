/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:37:13 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/06 18:40:22 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *us1;
	const unsigned char *us2;
	unsigned long i;

	*us1 = (const unsigned char *)s1;
	*us2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (us1[i] == us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}
