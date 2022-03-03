#include <stdio.h>
#include "get_next_line.h"
int main(int argc, char **argv)
{
    char *str;
    if(!argc)
        return(0);
    int fd = open(argv[1], O_RDONLY);
    while ((str = get_next_line(fd)) != NULL)
    {
        printf("res = %s", str);
        free(str);
    }
    str = get_next_line(fd);
    return (0);
}
