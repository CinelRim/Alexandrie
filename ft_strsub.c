ar    *ft_strsub(char const *s, unsigned int start, size_t len)
{
	    char    *ret;
		    int     i;
			
			    ret = (char *)malloc(len + 1);
				    if (!ret)
						        return (NULL);
					    i = 0;
						    while (i < len)
								    {
										        ret[i] = s[start + i];
												        i++;
														    }
							    ret[i] = '\0';
								    return (ret);
}/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:37:28 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 18:49:48 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*ret;
	unsigned long		i;

	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
