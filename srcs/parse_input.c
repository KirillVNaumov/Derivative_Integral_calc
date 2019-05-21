#include "calc.h"

char        *check_function(char *function)
{
    int     i;

    if (ft_strchr(function, 'x') == NULL)
        error("The function is written in incorrect form");
    i = -1;
    while (function[++i])
        if (!((function[i] >= '0' && function[i] <= '9') || \
            function[i] == '+' || function[i] == '-' || \
            function[i] == '^' || function[i] == 'x'))
            error("The function caontains unrecognized symbols");
    return (function);
}

void        parse_input(char **argv, t_calc *info)
{
    if (ft_strlen(argv[1]) != 2 || argv[1][0] != '-' || (argv[1][1] != 'i' && argv[1][1] != 'd'))
        error("No indecation of derivative or integral");
    if (argv[1][1] == 'i')
        info->type = 2;
    else
        info->type = 1;
    info->function = check_function(str_to_low(clear_spaces(ft_strdup(argv[2]))));
}