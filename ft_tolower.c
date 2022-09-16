/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:35:35 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/16 21:27:03 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	else
		return (c);
}

/*int main() {
    int test = 'N';
    int test2 = 'n';
    
	printf("%i\n", test);
	printf("%i\n", test2);
	printf("%i\n", ft_tolower(test)); // diminiu
	printf("%i\n", ft_tolower(test2)); // mantem
	return 0;
}*/