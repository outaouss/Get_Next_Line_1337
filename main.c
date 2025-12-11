#include "stdio.h"
#include "get_next_line.h"
#include "fcntl.h"

int main()
{
    // if (c != 2)
    //     return (1);
    int fd = open("test.txt", O_RDONLY);
    if (fd == -1)
        return (2);
    char *s;
    while ((s = get_next_line(fd)))
    {
        printf("%s", s);
        free(s);
        // break ;
    }
    return (0);
}