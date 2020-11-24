/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:47:43 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/20 21:04:42 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *str, int c)
{
	int i;
	unsigned char *str_c;

	i = 0;
	str_c = (unsigned char*)str;

	while (str_c[i])
	{
		if (str_c[i] == (char)c)
			return (str_c + i);
		i++;
	}
	return (NULL);
}
