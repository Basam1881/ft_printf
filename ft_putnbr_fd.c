/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:57:27 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/29 17:02:30 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int nb, t_flag *new_arg, int fd)
{
	int	new_nb;

	if (new_arg->zero_int_flag)
		return ;
	if (nb == 0)
		ft_putchar_fd(nb + 48, fd, new_arg);
	else if (nb > 0)
	{
		new_nb = nb / 10;
		if (new_nb != 0)
			ft_putnbr_fd(new_nb, new_arg, fd);
		ft_putchar_fd(nb % 10 + 48, fd, new_arg);
	}
	else
	{
		new_nb = 0 - (nb / 10);
		if (new_nb != 0)
			ft_putnbr_fd(new_nb, new_arg, fd);
		ft_putchar_fd(0 - (nb % 10) + 48, fd, new_arg);
	}
}
