/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:14:08 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 21:24:54 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
		if (*s++ != c && (*s == c || *s == '\0'))
			count++;
	return (count);
}

static int	ft_wordlen(char const *s, char c)
{
	int count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

char 	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int 	count;
	int		i;

	if (!(ret = (char **)malloc(ft_wordcount(s, c) + 1)))
		return (NULL);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret[count] = (char *)malloc(ft_wordlen(s, c) + 1);
			i = 0;
			while (*s != c && *s != '\0')
				ret[count][i++] = *s++;
			count++;
		}
		else
			s++;
	}
	ret[count] = 0;
	return (ret);
}
