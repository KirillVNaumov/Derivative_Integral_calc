#include "calc.h"

void            create_file(t_calc *info)
{
    int         fd;
    FILE        *file;

    info->type = 1;

	file = fopen("newton.c", "wb");
    fclose(file);
    fd = open("newton.c", O_RDWR);
    ft_putstr_fd("#include \"fractol.h\"\n\n", fd);
    ft_putstr_fd("int          newton(t_point pixel, t_fractol *fractol)\n", fd);
    close(fd);
}
