/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:06:11 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/26 18:36:52 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			i;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	i = 0;
	if (src < dst && len)
	{
		while (--len > 0)
			udst[len] = usrc[len];
		udst[0] = usrc[0];
	}
	else
		while (i < len)
		{
			udst[i] = usrc[i];
			i++;
		}
	return (dst);
}
