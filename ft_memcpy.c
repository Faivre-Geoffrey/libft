/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:16:52 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/12 09:14:30 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned int i;
	char *d_c;
	char *s_c;

	i = 0;
	d_c = (char *)destination;
	s_c = (char *)source;

	while (i < size)
	{
		d_c[i] = s_c[i];
		i++;
	}
	return (d_c);
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
