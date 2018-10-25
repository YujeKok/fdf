/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouseinputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:51:33 by asamir-k          #+#    #+#             */
/*   Updated: 2018/10/24 13:32:40 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fdf.h"

int		mouse_manager(int button, void *param)
{
	(void)param;
	ft_putstr("mouseinput :");
	ft_putnbr(button);
	ft_putchar('\n');
	return (0);
}
