/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 09:38:15 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/21 10:02:31 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t n);
{
	size_t i;
	
	i = -1;

	while (src[++i] && i < n - 1)
		dst[i] = src[i];
	dest[i] = '\n';
	return (i);
}
