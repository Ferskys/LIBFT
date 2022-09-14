/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 00:22:35 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/15 00:29:58 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char	*d = dest; //transformou em char pq vai de byte em byte na memoria 
    const char	*s = src; //const nao muda o conteudo
    if (d < s)
        while (n--)
            *d++ = *s++;
    else
        {
            char *lasts = s + (n-1);
            char *lastd = d + (n-1);
            while (n--)
                *lastd-- = *lasts--;
        }
    return (dest);
}
