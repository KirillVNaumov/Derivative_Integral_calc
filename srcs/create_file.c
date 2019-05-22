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
    ft_putstr_fd("{\n", fd);
    ft_putstr_fd("\tt_point		result;\n", fd);
    ft_putstr_fd("\tt_point		previous_result;\n", fd);
    ft_putstr_fd("\tint			i;\n\n", fd);
    ft_putstr_fd("\ti = 0;\n", fd);
    ft_putstr_fd("\tprevious_result.x = (double)(pixel.x - WIN_WIDTH / 2) / fractol->zoom;\n", fd);
    ft_putstr_fd("\tprevious_result.y = (double)(pixel.y - WIN_HEIGHT / 2) / fractol->zoom;\n", fd);
    ft_putstr_fd("\twhile (i < fractol->iterations)\n", fd);
    ft_putstr_fd("\t{\n", fd);
    ft_putstr_fd("\t\tresult.x = (previous_result.x * previous_result.x - previous_result.y * previous_result.y + constant.x);\n", fd);
    ft_putstr_fd("\t\tresult.y = (2 * previous_result.x * previous_result.y + constant.y);\n", fd);
    ft_putstr_fd("\t\tif (find_distance(result, previous_result) <= 0.001)\n", fd);
    ft_putstr_fd("\t\t\tbreak ;\n", fd);
    ft_putstr_fd("\t\tprevious_result.x = result.x;\n", fd);
    ft_putstr_fd("\t\tprevious_result.y = result.y;\n", fd);
    ft_putstr_fd("\t\t++i;\n", fd);
    ft_putstr_fd("\t}\n", fd);
    ft_putstr_fd("\treturn (i);\n", fd);
    ft_putstr_fd("}\n", fd);
    close(fd);
}
 