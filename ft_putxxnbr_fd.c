/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxxnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 02:00:23 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/29 17:03:24 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putxxnbr_fd(unsigned int nb, t_flag *new_arg, int fd)
{
	unsigned int	new_nb;

	if (new_arg->zero_int_flag)
		return ;
	if (nb == 0)
		ft_putchar_fd(nb + 48, fd, new_arg);
	else if (nb > 0)
	{
		new_nb = nb / 16;
		if (new_nb != 0)
			ft_putxxnbr_fd(new_nb, new_arg, fd);
		if (nb % 16 < 10)
			ft_putchar_fd(nb % 16 + 48, fd, new_arg);
		else
			ft_putchar_fd(nb % 16 + 55, fd, new_arg);
	}
}
