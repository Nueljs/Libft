/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:08:08 by macerver          #+#    #+#             */
/*   Updated: 2025/11/17 14:05:38 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*my_s;
	unsigned int		i;

	i = 0;
	my_s = malloc(ft_strlen(s) + 1);
	if (!my_s)
		return (NULL);
	while (s[i])
	{
		my_s[i] = f(i, s[i]);
		i++;
	}
	my_s[i] = '\0';
	return (my_s);
}
