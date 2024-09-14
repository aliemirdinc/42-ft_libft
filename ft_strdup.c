/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:31:44 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 12:31:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*str2;
	size_t			len;
	size_t			c;

	if (!str)
	{
		return (NULL);
	}
	len = ft_strlen(str);
	str2 = (char *)malloc(sizeof(char) * (len + 1));
	c = 0;
	if (!str2)
		return (NULL);
	while (str[c] != '\0')
	{
		str2[c] = str[c];
		c++;
	}
	str2[c] = '\0';
	return (str2);
}
