/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:25:25 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/24 21:09:16 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	if (!(mem = (unsigned char *)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		mem[i] = (unsigned char)0;
		i++;
	}
	return (mem);
}
