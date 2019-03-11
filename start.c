/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:47:26 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:47:50 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mandelbrotstart(t_pr *fr)
{
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	fr->fr = 0;
	img(fr);
	defmandel(fr);
	setup_controls(fr);
	man(fr);
	mlx_loop(fr->mlx_ptr);
}

void	juliastart(t_pr *fr)
{
	fr->fr = 1;
	img(fr);
	defjulia(fr);
	setup_controls(fr);
	julia(fr);
	mlx_loop(fr->mlx_ptr);
}

void	burnstart(t_pr *fr)
{
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	fr->fr = 2;
	img(fr);
	defburn(fr);
	setup_controls(fr);
	burn(fr);
	mlx_loop(fr->mlx_ptr);
}
