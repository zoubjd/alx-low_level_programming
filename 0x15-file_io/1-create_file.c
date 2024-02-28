#include "main.h"

/**
 * create_file - read text from file
 * @filename: name of file
 * @text_content: the content of the file
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
int fd, we, len = 0;

if (filename == NULL)
{
return (-1);
}
if (text_content)
{
for (len = 0; text_content[len];)
{
len++;
}
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
we = write(fd, text_content, len);
if (fd == -1 || we == -1)
{
return (-1);
}
close(fd);
return (1);
}
