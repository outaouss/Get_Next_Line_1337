#include "get_next_line.h"


int main()
{
    int fd = open("main.c", O_RDONLY);
    // int fd = open("get_next_line_bonus.c", O_RDONLY);
    
    if (fd < 0)
        return (printf("error fd\n"));

    char *line;
    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
}