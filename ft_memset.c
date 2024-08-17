/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/10 13:39:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *) ptr;
	i = 0;
	while (num > 0)
	{
		a[i] = (unsigned char)value;
		i++;
		num--;
	}
	return (ptr);
}
