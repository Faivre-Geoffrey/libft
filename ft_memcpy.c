/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:16:52 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/25 09:16:30 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;
	unsigned char *dest_c;
	unsigned char *src_c;

	i = 0;
	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;

	while (i < size)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest_c);
}
