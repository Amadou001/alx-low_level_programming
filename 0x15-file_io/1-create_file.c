#include "main.h"
/**
 * create_file - creates a file.
 * @filename: pointer the file
 * @text_content: pointer the text to be written inside the file.
 * Return: (1) in success or (-1) in failure
*/
int create_file(const char *filename, char *text_content)
{
int file;
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
close(file);
return (1);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
bytes_written = write(file, text_content, strlen(text_content));
if (bytes_written == -1)
{
return (-1);
}
close(file);
return (1);
}
