/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 00:28:07 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/15 00:30:10 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
# include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;
    while (n--)
        *d++ = *s++;
    return (dest);    //    PRECISO RETORNAR?
}

// int main (void)
// {
//     char dest;
//     char src[] = "pizza";
//     char *pdest = &dest;
//     char *psrc = src;
//     int size = 6;
    
//     memcpy(pdest, psrc, size);
//     printf("%c\n", dest);
//     return(0);
// }