#include "ft.h"

char *ft_readline(char *file)
{
    int fd;
    char *buf = NULL;
    char tmp[1024];
    char *newbuf = NULL;
    int size_buf = 0;
    ssize_t is_read = 0;
    int i = 0;

    fd = open(file, O_RDONLY);
    if (fd < 0)
    {
        ft_putstr_fd(2, "Dict Error\n");
        return (NULL);
    }
    while ((is_read = read(fd, tmp, sizeof(tmp) - 1)) > 0)
    {
        newbuf = realloc(buf, size_buf + is_read + 1);
        if (!newbuf)
        {
            if (buf)
                free(buf);
            ft_putstr_fd(2, "Realloc Error\n");
            close(fd);
            return (NULL);
        }
        buf = newbuf;
        while (i < is_read)
        {
            buf[size_buf + i] = tmp[i];
            i++;
        }
        size_buf += is_read;
    }
    if (is_read == -1)
    {
        ft_putstr_fd(2, "Dict Error\n");
        if (buf)
            free(buf);
        close(fd);
        return (NULL);
    }
    if (buf)
    {
        buf[size_buf] = '\0';
    }
    close(fd);
    return (buf);
}   