/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:07:22 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/20 00:38:56 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == 0)
// 		ft_putchar_fd('0', fd);
// 	if (n == INT_MIN)
// 		ft_putstr_fd("-2147483648", fd);
// 	if (n && n >= INT_MIN && n <= INT_MAX)
// 	{
// 		if (n <= 0)
// 		{
// 			ft_putchar_fd('-', fd);
// 			n = -n;
// 		}
// 		if (n >= 10)
// 			ft_putnbr_fd((n / 10), fd);
// 		ft_putchar_fd(((n % 10) + '0'), fd);
// 	}
// }

// void	ft_putnbr_fd(int n, int fd)
// {
// 	unsigned int	n2;

// 	if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		n2 = -n;
// 	}
// 	else
// 		n2 = n;
// 	if (n2 >= 10)
// 	{
// 		ft_putnbr_fd(n2 / 10, fd);
// 		ft_putnbr_fd(n2 % 10, fd);
// 	}
// 	else
// 		ft_putchar_fd(n2 + '0', fd);
// }

