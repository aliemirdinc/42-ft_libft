/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldinc <aldinc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:00:21 by aldinc            #+#    #+#             */
/*   Updated: 2024/10/07 12:00:27 by aldinc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		slen;

	a = (char)c;
	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (s[slen] == a)
		{
			return ((char *)s + slen);
		}
		slen--;
	}
	return (NULL);
}
