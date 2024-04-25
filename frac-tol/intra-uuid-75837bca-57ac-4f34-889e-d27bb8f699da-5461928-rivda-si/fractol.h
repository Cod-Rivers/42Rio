/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:54:18 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/23 19:54:19 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <X11/X.h>
# include <X11/keysym.h>
# include "minilibx-linux/mlx.h"

# define ERROR_MESSAGE "Wrong format. Please, use: \
\n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia \
<value_1> <value_2>\"\n"

# define WIDTH 1920
# define HEIGHT 1080

# define SUNSET_ORANGE    0xFF4500
# define OCEAN_BLUE       0x006994
# define FOREST_GREEN     0x228B22
# define GOLDEN_YELLOW    0xFFD700
# define SILVER_GRAY      0xC0C0C0
# define MIDNIGHT_PURPLE  0x720191
# define SKY_BLUE         0x87CEEB
# define CHOCOLATE_BROWN  0xD2691E
# define EMERALD_GREEN    0x50C878
# define RUBY_RED         0xE0115F
# define PLATINUM         0xE5E4E2
# define AMETHYST_PURPLE  0x9966CC
# define TURQUOISE        0x40E0D0

typedef struct s_complex
{
	double	x;
	double	y;
}	t_complex;

typedef struct s_img
{
	void	*img_ptr;
	char	*pixels_ptr;
	int		bpp;
	int		endian;
	int		line_len;
}	t_img;

typedef struct s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;
	double	escape_value;
	int		iterations_definition;
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
}	t_fractal;

int			ft_strncmp(char *s1, char *s2, int n);
void		putstr_fd(char *s, int fd);
double		atodbl(char *s);
void		fractal_init(t_fractal *fractal);
void		fractal_render(t_fractal *fractal);
double		map(double unscaled_num, double new_min, \
double new_max, double old_max);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);
int			key_handler(int keysym, t_fractal *fractal);
int			close_handler(t_fractal *fractal);
int			mouse_handler(int button, int x, int y, t_fractal *fractal);
int			julia_track(int x, int y, t_fractal *fractal);

#endif
