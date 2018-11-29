/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:53:42 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/24 20:07:39 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	unsigned char	uc;
	size_t			i;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (usrc[i] == uc)
			return (&(dst[i + 1]));
		i++;
	}
	return (NULL);
}
