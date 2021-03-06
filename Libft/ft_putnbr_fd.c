/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:09:37 by lmarecha          #+#    #+#             */
/*   Updated: 2022/02/18 15:14:35 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	j;

	j = n;
	if (j < 0)
	{
		write(fd, "-", 1);
		j *= -1;
	}
	if (j > 9)
	{
		ft_putnbr_fd((j / 10), fd);
	}
	ft_putchar_fd(('0' + (j % 10)), fd);
}
