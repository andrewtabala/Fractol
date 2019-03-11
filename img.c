/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:42:30 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:42:37 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	img(t_pr *fr)
{
	int		bpp;
	int		sl;
	int		e;

	fr->img_ptr = mlx_new_image(fr->mlx_ptr, fr->sw, fr->sh);
	fr->imgdata = (int*)mlx_get_data_addr(fr->img_ptr, &bpp, &sl, &e);
}
