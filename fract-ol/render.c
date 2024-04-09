#include "fractol.h"

static void my_pixel_put(int x, int y, t_img *img, int color)
{
	int offset;

	offset = (y * img -> line_length) + (x * (img -> bits_per_pixel / 8));
	*(unsigned int *) (img ->pixels_ptr + offset) = color;
}

/*static void	mandel_vs_julia(t_complex *z, t_complex *c, t_fractal *fractal)
{	
	if (!ft_strncmp(fractal->name, "julia", 5))
	{
		c->x = fractal->julia_x;
		c->y = fractal->julia_y;
	}
	else
	{
		c->x = z->x;
		c->y = z->y;
	}
}*/


static void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex	z;
	t_complex	c;
	int			i;
	int			color;

	i = 0;

	z.x = 0.0;
	z.y = 0.0;
	
	c.x = (map(x, -2, +2, 0, WIDTH) * fractal -> zoom ) + fractal -> shift_x;
	c.y = (map(y, +2, -2, 0, HEIGHT) * fractal -> zoom ) + fractal -> shift_y;

	//mandel_vs_julia(&z, &c, fractal);
	
	while(i < fractal -> interations_definition)
	{
		z = sum_complex(square_complex(z), c); // mandelbrot formul

		if((z.x * z.x) + (z.y * z.y) > fractal -> escape_value)
		{
			color = map(i, BLACK, WHITE, 0, fractal ->interations_definition);
			my_pixel_put(x, y, &fractal -> img, color); 
			return;
		}
		++i;
	}
	my_pixel_put(x, y, &fractal -> img, NEON_ORANGE);
}

void	fractal_render(t_fractal *fractal)
{
	int	x;
	int	y;

	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WIDTH)
		{
			handle_pixel(x, y, fractal);
		}
	}
	mlx_put_image_to_window(fractal->mlx_connection,
							fractal->mlx_window,
							fractal->img.img_ptr,
							0, 0);
}