/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfutilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:04:13 by erico-ke          #+#    #+#             */
/*   Updated: 2025/01/09 17:02:08 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_p_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_p_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_p_fd("(null)", 1));
	while (s[i])
	{
		ft_putchar_p_fd(s[i], fd);
		i++;
	}
	return (i);
}

int	ft_putnbr_p_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_putstr_p_fd("-2147483648", fd));
	if (n < 0)
	{
		i += ft_putchar_p_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_putnbr_p_fd(n / 10, fd);
		i += ft_putnbr_p_fd(n % 10, fd);
	}
	else
		i += ft_putchar_p_fd(n + '0', fd);
	return (i);
}

int	ft_putnbrfforuinput_fd(unsigned int n, int fd)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putnbr_p_fd(n / 10, fd);
		i += ft_putnbr_p_fd(n % 10, fd);
	}
	else
		i += ft_putchar_p_fd(n + '0', fd);
	return (i);
}
