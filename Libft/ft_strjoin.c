/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:27:49 by macerver          #+#    #+#             */
/*   Updated: 2025/11/22 19:37:10 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = (char *)malloc(s1_len + s2_len + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("Hola como ", "estas?"));
// 	return 0;
// }
