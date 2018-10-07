/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:17:34 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/06 18:35:57 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
{
	unsigned char *d;
	const unsigned char *s;
	unsigned char uc;
	unsigned long i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	uc = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == uc)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
