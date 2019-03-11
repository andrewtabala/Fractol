/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyactions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:43:33 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:43:41 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		reset(t_pr *fr)
{
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	fr->colorsw = 10;
	fr->colcounter = 0;
	if (fr->fr == 0)
		defmandel(fr);
	else if (fr->fr == 1)
		defjulia(fr);
	else if (fr->fr == 2)
		defburn(fr);
	FRE;
	mlx_loop(fr->mlx_ptr);
}

void		zoom(int key, t_pr *fr)
{
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	if (key == 27 && fr->zoom > 1)
		fr->zoom /= 2;
	else if (key == 24)
		fr->zoom *= 2;
	FRE;
	mlx_loop(fr->mlx_ptr);
}

void		move(int i, t_pr *fr)
{
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	if (i == 123)
	{
		fr->movex += 0.01 / fr->zoom;
		FRE;
	}
	else if (i == 126)
	{
		fr->movey += 0.01 / fr->zoom;
		FRE;
	}
	else if (i == 124)
	{
		fr->movex -= 0.01 / fr->zoom;
		FRE;
	}
	else if (i == 125)
	{
		fr->movey -= 0.01 / fr->zoom;
		FRE;
	}
	mlx_loop(fr->mlx_ptr);
}
