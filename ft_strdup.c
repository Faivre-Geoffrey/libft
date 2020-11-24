/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:21:38 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/24 11:21:52 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*scop;

	len = ((ft_strlen(s)) + 1);
	if ((scop = ((char*)malloc(sizeof(char) * len))))
	{
		ft_strcpy(scop, s);
		return (scop);
	}
	return (NULL);
}
