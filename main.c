#include "stdio.h"
#include "get_next_line.h"
#include "fcntl.h"

int main(int c, char **v)
{
    if (c != 2)
        return (1);
    int fd = open(v[1], 0);
    if (fd == -1)
        return (2);
    char *s;
    while ((s = get_next_line(fd)))
    {
        printf("%s", s);
        free(s);
    }
    return (0);
}