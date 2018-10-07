/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:39:36 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/06 20:02:56 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *s;
	const char *substr;
	unsigned long i;

	substr = needle;
	i = 1;

	if (*substr == 0)
		return (haystack);
	while (*haystack)
	{
		s = haystack;
		while (*s++ == *substr++)
			if (*substr == 0 || i++ == len)
				return (haystack);
		substr = needle;
		i = 1;
		haystack++;
	}
	return (NULL);
}
