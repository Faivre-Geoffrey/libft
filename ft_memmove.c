/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:43:13 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/25 10:22:22 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dest_c;
	unsigned char *src_c;

	i = 0;
	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;

	if(!dest && !src)
		return (NULL);
	if (src < dest)
	{
		while (n > 0)
		{
			dest_c[n] = src_c[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest_c[i] = src_c[i];
			i++;
		}
	}
	return (dest);
}
