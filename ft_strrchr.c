/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 21:12:25 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/20 21:30:28 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int c)
{
	int i;
	unsigned char *str_c;

	i = 0;
	str_c = (unsigned char*)str;
	while (str_c[i])
		i++;
	while (i > 0)
	{
		if (str_c[i] == (char)c)
			return (str_c + i);
		i--;
	}
	return (NULL);
}
