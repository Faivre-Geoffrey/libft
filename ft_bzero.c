/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 08:59:11 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/11 11:14:21 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char	*s_c;

	s_c = (char *)s;
	i = 0;
	while (i < n)
	{
		s_c[i] = '\0';
		i++;
	}
}

int main()

	char s1[] = "bonjourjesuisgentil";
	char s2[] = "bonjourjesuisgentil";
	int nb = 5 ;

		ft_bzero(s1, nb);
		bzero(s2, nb);


		printf("mine = %s\n", s1);
		printf("pc = %s\n", s2);

	return (0);
}


