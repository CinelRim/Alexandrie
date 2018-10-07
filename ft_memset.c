/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:57:41 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/06 17:38:37 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *byte = (unsigned char *)b;
	while (len > 0)
	{
		*byte = (unsigned char)c;
		byte++;
		len--;
	}
	return (b);
}
