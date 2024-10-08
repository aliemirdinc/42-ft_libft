/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldinc <aldinc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:58:41 by aldinc            #+#    #+#             */
/*   Updated: 2024/10/07 11:58:41 by aldinc           ###   ########.fr       */
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
