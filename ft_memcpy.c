/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:16:52 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/19 16:54:28 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int main()
{
	char ft_dest[40];
	char dest[40];
	char *src = "carigolzero";

	ft_memcpy(ft_dest, src, 4);
	memcpy(dest, src, 4);

	printf("ft_memcpy : %s\n", ft_dest);
	printf("memcpy : %s\n", dest);
return (0);
}
