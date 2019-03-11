/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setdef.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:48:02 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 13:48:11 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	defmandel(t_pr *fr)
{
	fr->zoom = 1;
	fr->movex = -0.5;
	fr->movey = 0;
	fr->maxiterations = 50;
}

void	defjulia(t_pr *fr)
{
	fr->zoom = 1;
	fr->movex = 0;
	fr->movey = 0;
	fr->maxiterations = 50;
	fr->cre = -0.7;
	fr->cim = 0.27015;
}

void	defburn(t_pr *fr)
{
	fr->zoom = 1;
	fr->movex = -0.5;
	fr->movey = -0.5;
	fr->maxiterations = 50;
	fr->cre = -0.7;
	fr->cim = 0.27015;
}
