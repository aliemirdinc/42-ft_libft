/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:49:53 by marvin            #+#    #+#             */
/*   Updated: 2024/09/05 13:49:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (src[i])
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (x < size - 1 && src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (i);
}
