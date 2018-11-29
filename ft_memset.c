/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:31:49 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/24 20:10:30 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*ub;
	size_t			i;

	uc = (unsigned char)c;
	ub = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ub[i] = uc;
		i++;
	}
	return (b);
}
