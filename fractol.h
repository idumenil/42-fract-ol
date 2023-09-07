/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idumenil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:52:41 by idumenil          #+#    #+#             */
/*   Updated: 2023/09/07 15:53:52 by idumenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "./minilibx-linux/mlx.h"

#define WIDTH	800
#define HEIGHT	800

typedef struct s_img
{
	void	*img_ptr;
	char	*pixels_ptr;
	int	bpp; //bit per pixels
	int	endian;
	int	line_len;
}		t_img;

typedef struct s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	*img;
}		t_fractal;

int	ft_strncmp(char *s1, char *s2, int n);
void	fractal_init(t_fractal *fractal);

#endif
