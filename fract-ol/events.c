#include "fractol.h"

int    close_handler(t_fractal *fractal)
{
    mlx_destroy_image(fractal->mlx_connection,
                            fractal -> img.img_ptr);
    mlx_destroy_window(fractal->mlx_connection,
                            fractal -> mlx_window);
    mlx_destroy_display(fractal->mlx_connection);
    free(fractal->mlx_connection);
    exit(EXIT_SUCCESS);
}


int key_handler(int keysym, t_fractal *fractal)
{
    printf("%d\n", keysym);

    if (keysym == XK_Escape)
    {
        close_handler(fractal); //todo
    }
    if (keysym == XK_Left)
    {
        fractal -> shift_x += (0.5 * fractal -> zoom);
    }
    else if (keysym == XK_Right)
    {
        fractal -> shift_x -= (0.5 * fractal -> zoom);
    }
    else if ( keysym == XK_Up)
    {
        fractal -> shift_y -= (0.5 * fractal -> zoom);
    }
    else if (keysym == XK_Down)
    {
        fractal -> shift_y += (0.5 * fractal -> zoom);
    }
    else if (keysym == XK_equal)
        fractal -> interations_definition += 10;

    else if (keysym == XK_minus)
    {
        fractal -> interations_definition -= 10;
        printf("%i", fractal ->interations_definition);
    }
    printf("%i", fractal ->interations_definition);
    fractal_render(fractal);

    return (0);
}

int	mouse_handler(int button, int x, int y, t_fractal *fractal)
{
	
    //printf("%d\n", button);
    //Zoom in
	if (button == Button5)
	{
		fractal->zoom *= 0.95;
	}
	//Zoom out
	else if (button == Button4)
	{
		fractal->zoom *= 1.05;
	}
	// refresh
	fractal_render(fractal);
	return 0; 
}

/*int julia_track(int x, int y, t_fractal *fractal)
{
    {
        fractal->julia_x = map(x, -2, +2, 0, WIDTH) * fractal->zoom + fractal->shift_x;
        fractal->julia_y = map(y, +2, -2, 0, HEIGHT) * fractal->zoom + fractal->shift_y;
        fractal_render(fractal);
    }
    return 0;
}*/