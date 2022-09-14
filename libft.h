/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:19:53 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/14 22:58:21 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(char c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
int	ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*memset(void *s, int c, size_t n);


#endif