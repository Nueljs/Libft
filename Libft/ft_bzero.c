/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:41:13 by macerver          #+#    #+#             */
/*   Updated: 2025/11/13 01:02:59 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	
	s2 = (unsigned char *) s;
	while (n > 0)
	{
		*s2 = 0;
		s2++;
		n--;
	}
}

#include <stdio.h>
//#include <string.h>
int	main(void)
{
	char	mychar[10] = "hola que";
	int	i;
	i = 0;
	ft_bzero(mychar, 3);
	printf("%s", mychar);
	/*while (i < 10)
	{
		printf("%c", mychar[i++]);
	}*/
	return (0);
}
