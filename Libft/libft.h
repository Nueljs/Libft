/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:52:47 by macerver          #+#    #+#             */
/*   Updated: 2025/11/11 19:12:37 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <stdio.h>

int	is_alpha(int c);
int	is_digit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void	*ft_memset(void *s, int	c, size_t n);
int	ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);

#endif
