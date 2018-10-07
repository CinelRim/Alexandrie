/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:28:42 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 17:52:51 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ret;
	char *r;

	ret = (char *)malloc(sizeof(s));
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
