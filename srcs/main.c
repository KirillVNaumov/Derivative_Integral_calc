#include "calc.h"

void        print_usage(void)
{
    printf("Usage: ./calc [-i/-d] [function (write as a continuation of 'f(x) = ')]\n");
    printf("The function suppose to be in polymonial form\n");
}

int         main(int argc, char **argv)
{
    t_calc  info;
 
    if (argc == 3)
    {
        parse_input(argv, &info);
    }
    else
        print_usage();
}