#include "fractol.h"

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init();
	if (!fractal->mlx_connection)
		write(1, "mlx connection error\n", 21);
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection, WIDTH, HEIGHT, fractal->name);
	if (!fractal->mlx_window)
	{
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		write(1, "mlx window error\n", 17);
	}
	fractal->img.ptr = mlx_new_image(fractal->mlx_connection, WIDTH, HEIGHT);
	if (!fractal->img.ptr)
	{
		mlx_destroy_window(fractal->mlx.connection, fractal->mlx.window);
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		write(1, "mlx image error\n", 16);
	}
	fractal->img->pixels_ptr = mlx_get_data_addr(fractal->img->img_ptr, &fractal->img->bpp, &fractal->img->line_len, &fractal->img->endian);
}
