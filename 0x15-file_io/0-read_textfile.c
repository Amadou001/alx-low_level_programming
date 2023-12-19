#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to the file
 * @letters: number of letters to be read from the file
 * Return: the number of bytes read.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;
if (filename == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
buffer = (char *)malloc(sizeof(char) * letters + 1);
if (buffer == NULL)
{
fclose(file);
return (0);
}
bytes_read = fread(buffer, 1, letters, file);
if (bytes_read == -1)
{
free(buffer);
fclose(file);
return (0);
}
buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
fclose(file);
return (0);
}
free(buffer);
fclose(file);
return (bytes_written);
}
