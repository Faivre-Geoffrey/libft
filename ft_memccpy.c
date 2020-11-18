/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:09:27 by gefaivre          #+#    #+#             */
/*   Updated: 2020/11/12 10:54:41 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * memccpy (void *destination, const void * source, int c, size_t size)
{
	unsigned int i;
	char *d_c;
	char *s_c;

	i = 0;
	d_c = (char *)destination;
	s_c = (char *)source;

	while (i < size)
	{
		d_c[i] = s_c[i];
		if (d_c == (unsigned char)c)
		{
			return (d_c + i + 1);
		}
		i++;
	}
	return (NULL);

}
