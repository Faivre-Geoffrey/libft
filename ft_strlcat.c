/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:10:51 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/25 10:00:32 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;	
	size_t j;

	i = 0;
	while (dest[i] && i < n)
		i++;
	j = 0;
	while (src[j] && j < n - 1)
		dest[i++] = src[j++];
	if (j < n)
		dest[i] = '\0';
	return ((size_t)ft_strlen(dest) + (size_t)ft_strlen((char*)src));

}
