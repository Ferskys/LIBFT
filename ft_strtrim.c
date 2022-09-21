/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:07:54 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/21 22:28:20 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char 	i;
// 	char 	j;
// 	char    *str;

//    	i = 0;
// 	while (s1[i] && ft_strchr(set, s1[i]))
// 		i++;
// 	j = ft_strlen(s1);
// 	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
// 		j--;
// 	str = (char *)malloc(sizeof(char) * (j - i + 1));
// 	if (!str || !s1 || !set)
// 		return (0);
// 	ft_strlcpy(str, &s1[i], j - i + 1);
// 	return (str);
// }
