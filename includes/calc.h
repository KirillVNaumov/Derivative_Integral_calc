#ifndef CALC_H
# define CALC_H

# include "../libft/libft.h"
# include "math.h"

typedef     struct s_calc
{
    int     type;
    char    *function;
}           t_calc;

void        parse_input(char **argv, t_calc *info);

/*
**  UTILS
*/

char        *clear_spaces(char *str);
char        *str_to_low(char *str);

#endif