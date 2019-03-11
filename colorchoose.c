/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorchoose.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:36:37 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:37:26 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	colorswitch(t_pr *fr)
{
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	if (fr->colcounter <= 15)
	{
		fr->colorsw = fr->colorsw * 10;
		fr->colcounter++;
	}
	if (fr->colcounter >= 16)
	{
		fr->colcounter = 0;
		fr->colorsw = 10;
	}
	FRE;
	mlx_loop(fr->mlx_ptr);
}

int		colorchoose(int i, t_pr *fr)
{
	int c;
	int color;

	c = 0;
	color = 0;
	while (c < i)
	{
		c++;
		color += fr->colorsw;
	}
	return (color);
}
