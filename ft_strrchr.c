/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 21:12:25 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/28 09:54:04 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*str_c;

	i = 0;
	str_c = (char*)str;
	while (str_c[i])
		i++;
	while (i >= 0)
	{
		if (str_c[i] == (char)c)
			return (str_c + i);
		i--;
	}
	return (NULL);
}
