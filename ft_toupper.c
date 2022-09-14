/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:18:11 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/13 23:58:51 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
	else
		return (c);
}

/*int main() {
    int test = 'N';
    int test2 = 'n';
    
	printf("%i\n", test);
	printf("%i\n", test2);
	printf("%i\n", ft_toupper(test));
	printf("%i\n", ft_toupper(test2));
	return 0;
}*/