/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 09:02:11 by geoffrey          #+#    #+#             */
/*   Updated: 2020/11/25 10:38:50 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
	int i;
	unsigned char *mem_s;

	mem_s = (unsigned char *)s;
	i = -1;
	while (n > 0)
	{
		mem_s[i++] = (unsigned char)c;
		n--;
	}
	return (mem_s);
}
