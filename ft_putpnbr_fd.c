/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 02:53:31 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/29 17:04:42 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpnbr_fd(unsigned long long int nb, t_flag *new_arg, int fd)
{
	unsigned long long int	new_nb;

	if (nb == 0)
		ft_putchar_fd(nb + 48, fd, new_arg);
	else if (nb > 0)
	{
		new_nb = nb / 16;
		if (new_nb != 0)
			ft_putpnbr_fd(new_nb, new_arg, fd);
		if (nb % 16 < 10)
			ft_putchar_fd(nb % 16 + 48, fd, new_arg);
		else
			ft_putchar_fd(nb % 16 + 87, fd, new_arg);
	}
}
