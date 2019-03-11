/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:46:27 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:47:13 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		controlsmenu(t_pr *fr)
{
	void	*wm;
	void	*mp;
	int		y;
	int		col;

	y = 0;
	col = 16777215;
	mp = fr->mlx_ptr;
	wm = fr->win_ptr;
	mlx_string_put(mp, wm, 20, y += 5, col, "Controls");
	mlx_string_put(mp, wm, 10, y += 20, col,
			"Move: Key Arrows/Hold LMB and move");
	mlx_string_put(mp, wm, 10, y += 20, col, "Zoom: +/- or scroll");
	mlx_string_put(mp, wm, 10, y += 20, col, "Change colors: C");
	mlx_string_put(mp, wm, 10, y += 20, col, "Reset: R");
	mlx_string_put(mp, wm, 10, y += 20, col, "Mandelbrot: 1");
	mlx_string_put(mp, wm, 10, y += 20, col, "Julia: 2");
	mlx_string_put(mp, wm, 10, y += 20, col, "BurningShip: 3");
	mlx_string_put(mp, wm, 10, y += 20, col, "Exit: esc");
}

int			key_press(int key, void *param)
{
	t_pr	*fr;

	fr = (t_pr *)param;
	if (key == 53)
		exit(0);
	if (key == 123 || key == 126 || key == 124 || key == 125)
		move(key, fr);
	if (key == 27 || key == 24 || key == 5 || key == 4)
		zoom(key, fr);
	if (key == 18 || key == 83)
		mandelbrotstart(fr);
	if (key == 19 || key == 84)
		juliastart(fr);
	if (key == 20 || key == 85)
		burnstart(fr);
	if (key == 15)
		reset(fr);
	if (key == 8)
		colorswitch(fr);
	return (0);
}

void		setup_controls(t_pr *fr)
{
	mlx_hook(fr->win_ptr, 2, 0, key_press, fr);
	mlx_hook(fr->win_ptr, 4, 0, mouse_press, fr);
	mlx_hook(fr->win_ptr, 5, 0, mouse_release, fr);
	mlx_hook(fr->win_ptr, 6, 0, mouse_move, fr);
}

int			main(int argc, char *argv[])
{
	t_pr fr;

	fr.colorsw = 10;
	fr.colcounter = 0;
	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "mandelbrot") == 0)
			fmstart(&fr);
		else if (ft_strcmp(argv[1], "julia") == 0)
			fjstart(&fr);
		else if (ft_strcmp(argv[1], "burningship") == 0)
			fbstart(&fr);
	}
}
