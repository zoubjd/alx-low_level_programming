#include "main.h"

/**
 * read_textfile - read text from file
 * @filename: name of file
 * @letters: number of bytes
 * 
 * Return: number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes;
    char *buf;

    if (!filename || !letters)
        return (0);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);
    buf = malloc(sizeof(char) * letters);
    bytes = read(fd, &buf[0], letters);
    bytes = write(STDOUT_FILENO, &buf[0], bytes);
    free(buf);
    close(fd);
    return (bytes);
}

