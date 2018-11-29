/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:56:33 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/29 20:33:29 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_asize(int n)
{
	int count;

	count = 1;
	if (n < 0)
		count++;
	while (n /= 10)
		count++;
	return (count);
}

char		*ft_itoa(int n)
{
	char			*ret;
	unsigned int	i;
	unsigned int	nb;

	i = ft_asize(n);
	if (!(ret = (char *)malloc(i + 1)))
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		nb = (unsigned int)-n;
	}
	else
		nb = (unsigned int)n;
	ret[i--] = '\0';
	ret[i--] = nb % 10 + '0';
	while (nb /= 10)
		ret[i--] = nb % 10 + '0';
	return (ret);
}
