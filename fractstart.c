/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractstart.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:42:53 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:43:11 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	fmstart(t_pr *fr)
{
	fr->sw = 768;
	fr->sh = 432;
	fr->mlx_ptr = mlx_init();
	fr->win_ptr = mlx_new_window(fr->mlx_ptr, fr->sw, fr->sh, "Fractol");
	fr->fr = 0;
	img(fr);
	defmandel(fr);
	setup_controls(fr);
	man(fr);
	mlx_loop(fr->mlx_ptr);
}

void	fjstart(t_pr *fr)
{
	fr->sw = 768;
	fr->sh = 432;
	fr->mlx_ptr = mlx_init();
	fr->win_ptr = mlx_new_window(fr->mlx_ptr, fr->sw, fr->sh, "Fractol");
	fr->fr = 1;
	img(fr);
	defjulia(fr);
	setup_controls(fr);
	julia(fr);
	mlx_loop(fr->mlx_ptr);
}

void	fbstart(t_pr *fr)
{
	fr->sw = 768;
	fr->sh = 432;
	fr->mlx_ptr = mlx_init();
	fr->win_ptr = mlx_new_window(fr->mlx_ptr, fr->sw, fr->sh, "Fractol");
	fr->fr = 2;
	img(fr);
	defburn(fr);
	setup_controls(fr);
	burn(fr);
	mlx_loop(fr->mlx_ptr);
}
