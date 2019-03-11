/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:58:01 by atabala           #+#    #+#             */
/*   Updated: 2019/02/04 14:10:12 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx_macos/mlx.h"
# include "libft/libft.h"

# define FRE if(fr->fr==0)man(fr);else if(fr->fr==1)julia(fr);else burn(fr);

# define Z fr->newre=0;fr->newim=0;fr->oldre=0;fr->oldim=0

typedef struct	s_pr
{
	void		*mlx_ptr;
	void		*win_ptr;
	double		pr;
	double		pi;
	double		cre;
	double		cim;
	double		newre;
	double		newim;
	double		oldre;
	double		oldim;
	double		zoom;
	double		movex;
	double		movey;
	int			color;

	int			mousexpos;
	int			mouseypos;
	int			mouseclick;

	int			maxiterations;

	int			colorsw;
	int			colcounter;

	void		*img_ptr;
	int			*imgdata;

	int			fr;

	int			sw;
	int			sh;
	int			scounter;
}				t_pr;

void			img(t_pr *fr);
int				colorchoose(int i, t_pr *fr);
void			man(t_pr *ft);
void			defmandel(t_pr *fr);
int				mouse_press(int button, int x, int y, void *param);
int				mouse_release(int button, int x, int y, void *param);
int				mouse_move(int x, int y, void *param);
void			move(int i, t_pr *fr);
void			zoom(int key, t_pr *fr);
void			julia(t_pr *fr);
void			defjulia(t_pr *fr);
void			controlsmenu(t_pr *fr);
void			reset(t_pr *fr);
void			colorswitch(t_pr *fr);
void			burn(t_pr *fr);
void			defburn(t_pr *fr);

void			mandelbrotstart(t_pr *fr);
void			juliastart(t_pr *fr);
void			burnstart(t_pr *fr);
void			setup_controls(t_pr *fr);
void			window(t_pr *fr);

void			fmstart(t_pr *fr);
void			fjstart(t_pr *fr);
void			fbstart(t_pr *fr);

#endif
