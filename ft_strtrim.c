/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:40:39 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/29 22:17:52 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' ||
		c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned long	len;
	unsigned long	i;

	if (!s)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	if (!*s)
		return ("");
	len = 0;
	while (s[len])
		len++;
	len--;
	while (ft_isspace(s[len]))
		len--;
	if (!(ret = (char *)malloc(len + 2)))
		return (NULL);
	i = -1;
	while (++i <= len)
		ret[i] = s[i];
	ret[i] = '\0';
	return (ret);
}
