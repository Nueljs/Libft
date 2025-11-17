/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:39:33 by macerver          #+#    #+#             */
/*   Updated: 2025/11/17 12:45:34 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		s1_len;
	int		set_len;
	int		i;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	i = 0;
	if (ft_strnstr)
	{
		while (s1[i] == set[i])
		{
			s1_len--;
			i++;
		}
		i = 0;
		while (s1[s1_len - 1] == set[i])
		{
			s1_len--;
			i++;
		}
	}
}
