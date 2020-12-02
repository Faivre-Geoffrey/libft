/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:20:24 by gefaivre          #+#    #+#             */
/*   Updated: 2020/12/01 11:18:43 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if(!(result = malloc(size * nmemb)))
		return (NULL);
	while (i <= nmemb)
	{
		((char*)result)[i] = 0;
		i++;
	}
	return (result);
}
