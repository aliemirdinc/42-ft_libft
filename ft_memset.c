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

void *ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *a;
	size_t i;

	a = (unsigned char *) ptr;
	i = 0;
	while (num > 0)
	{
		a[i] = (unsigned char)value;
		i++;
		num--;
	}
	return(ptr);
}

#include <stdio.h>
int main()
{
	char a[] = "selam";
	printf("ilk deger %s\n", a);
	char *b = ft_memset(a, 353, 50);
	printf("son deger %s\n", b);
}
