/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 08:21:10 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/24 11:10:38 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *src, const char *chrc, size_t n)
{
	size_t i;
	size_t j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	while (src[i] && i < n)
	{
		j = 0;
		while (src[i + j] == chrc[j] && (i + j) < n)
		{
			j++;
			if (chrc[j] == '\0')
				return ((char*)src + i);
		}
		i++;
	}
	return (NULL);
}
