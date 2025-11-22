/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:24:42 by macerver          #+#    #+#             */
/*   Updated: 2025/11/22 17:15:05 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return ((unsigned char) s1[i - 1] - (unsigned char) s2[i - 1]);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// int	main(void)
// {
// 	printf("%d", ft_strncmp("abcdefgh","abcdwxyz", 4));
// 	return 0;
// }