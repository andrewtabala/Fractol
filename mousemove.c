/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mousemove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:48:20 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:48:29 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		func(t_pr *fr, int x, int y)
{
	if (fr->mouseclick == 1)
	{
		if (x < fr->mousexpos)
			fr->movex += ((fr->mousexpos - x) * 0.01) / fr->zoom;
		else if (x > fr->mousexpos)
			fr->movex -= ((x - fr->mousexpos) * 0.01) / fr->zoom;
		if (y < fr->mouseypos)
			fr->movey += ((fr->mouseypos - y) * 0.01) / fr->zoom;
		else if (y > fr->mouseypos)
			fr->movey -= ((y - fr->mouseypos) * 0.01) / fr->zoom;
	}
	else if (fr->mouseclick == 0 && fr->fr != 0)
	{
		if (x < fr->mousexpos)
			fr->cre += 0.01;
		else if (x > fr->mousexpos)
			fr->cre -= 0.01;
		if (y < fr->mouseypos)
			fr->cim += 0.01;
		else if (y > fr->mouseypos)
			fr->cim -= 0.01;
	}
}

int				mouse_press(int button, int x, int y, void *param)
{
	t_pr	*fr;

	fr = (t_pr *)param;
	fr->mousexpos = x;
	fr->mouseypos = y;
	if (button == 5 || button == 4)
	{
		mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
		if (button == 5 && fr->zoom > 1)
			fr->zoom /= 2;
		else if (button == 4)
			fr->zoom *= 2;
		FRE;
		mlx_loop(fr->mlx_ptr);
	}
	if (button == 1)
		fr->mouseclick = 1;
	return (0);
}

int				mouse_release(int button, int x, int y, void *param)
{
	t_pr	*fr;

	fr = (t_pr *)param;
	fr->mousexpos = x;
	fr->mouseypos = y;
	if (button == 1)
		fr->mouseclick = 0;
	return (0);
}

int				mouse_move(int x, int y, void *param)
{
	t_pr	*fr;

	fr = (t_pr *)param;
	mlx_clear_window(fr->mlx_ptr, fr->win_ptr);
	func(fr, x, y);
	fr->mousexpos = x;
	fr->mouseypos = y;
	FRE;
	mlx_loop(fr->mlx_ptr);
	return (0);
}
