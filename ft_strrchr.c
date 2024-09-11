/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:04:16 by marvin            #+#    #+#             */
/*   Updated: 2024/09/11 13:04:16 by marvin           ###   ########.fr       */
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
