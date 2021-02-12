/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_hook1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:50:20 by hyunkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:06:13 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		event_key_pressed(int key, void *param)
{
	t_win	*win;

	win = (t_win *)param;
	if (key == ESC)
		show_error(0, win, "");
	else if (key == TOWARD && win->keybuffer->toward == 0)
		win->keybuffer->toward = 1;
	else if (key == BACKWARD && win->keybuffer->backward == 0)
		win->keybuffer->backward = 1;
	else if (key == LEFT && win->keybuffer->left == 0)
		win->keybuffer->left = 1;
	else if (key == RIGHT && win->keybuffer->right == 0)
		win->keybuffer->right = 1;
	else if (key == CAM_LEFT && win->keybuffer->turn_left == 0)
		win->keybuffer->turn_left = 1;
	else if (key == CAM_RIGHT && win->keybuffer->turn_right == 0)
		win->keybuffer->turn_right = 1;
	return (SUCCES);
}

int		event_key_released(int key, void *param)
{
	t_win	*win;

	win = (t_win *)param;
	if (key == TOWARD && win->keybuffer->toward == 1)
		win->keybuffer->toward = 0;
	else if (key == BACKWARD && win->keybuffer->backward == 1)
		win->keybuffer->backward = 0;
	else if (key == LEFT && win->keybuffer->left == 1)
		win->keybuffer->left = 0;
	else if (key == RIGHT && win->keybuffer->right == 1)
		win->keybuffer->right = 0;
	else if (key == CAM_LEFT && win->keybuffer->turn_left == 1)
		win->keybuffer->turn_left = 0;
	else if (key == CAM_RIGHT && win->keybuffer->turn_right == 1)
		win->keybuffer->turn_right = 0;
	return (SUCCES);
}

int		event_destroy_window(void *param)
{
	t_win	*win;

	win = (t_win *)param;
	show_error(0, win, "");
	return (SUCCES);
}

void	draw(t_win *win)
{
	if (!(raycasting(win)))
		show_error(0, win, "");
}

int		loop_manager(void *param)
{
	t_win	*win;

	win = (t_win *)param;
	draw(win);
	key_manager(win);
	return (SUCCES);
}
