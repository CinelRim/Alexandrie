/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:45:35 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/29 19:35:30 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	char	*r;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(ret = (char *)malloc(i + 1)))
		return (NULL);
	r = ret;
	while (*s)
	{
		*r = f(*s);
		s++;
		r++;
	}
	*r = '\0';
	return (ret);
}
