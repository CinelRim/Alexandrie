/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:07:43 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/29 19:06:27 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*s;
	const char	*substr;
	size_t		i;

	if (!(*needle))
		return (char *)(haystack);
	while (*haystack && len > 0)
	{
		substr = needle;
		s = haystack;
		i = len;
		while (*s++ == *substr++ && i-- > 0)
			if (!(*substr))
				return (char *)(haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
