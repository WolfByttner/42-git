/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 23:53:02 by jbyttner          #+#    #+#             */
/*   Updated: 2016/01/11 20:49:21 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libmlxutil.h"
#include "fractol.h"

int		main(int ac, char **av)
{
	if (fractol_read_options(ac, av))
	{
		fractol_load_screens();
	}
	return (0);
}