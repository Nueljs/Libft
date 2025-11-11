/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:41:13 by macerver          #+#    #+#             */
/*   Updated: 2025/11/11 13:55:35 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, unsigned int n)
{
	unsigned char	*s2;
	
	s2 = s;
	while (n > 0)
	{
		*s2 = '\0';
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
	while (i < 10)
	{
		printf("%c", mychar[i++]);
	}
	return (0);
}
