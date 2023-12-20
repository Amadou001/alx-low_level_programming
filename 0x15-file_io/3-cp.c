#include "main.h"
/**
 * main - execute the program
 * @argc: the argument counter
 * @argv: pointer to the pointer
 * Return: always (0)
*/
int main(int argc, char **argv)
{
int file_from, file_to;
ssize_t bytes_read, bytes_written, from_close, to_close;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
print_error(98, "Error: Can't read from file\n", argv[0]);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
if (file_to == -1)
{
close(file_from);
print_error(99, "Error: Can't write to\n", argv[1]);
}
bytes_read = read(file_from, buffer, BUFFER_SIZE);
if (bytes_read == -1)
{
close(file_from);
close(file_to);
print_error(98, "Can't read from file\n", argv[0]);
}
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_read != bytes_written)
{
close(file_from);
close(file_to);
print_error(99, "Error: Can't write to\n", argv[1]);
}
from_close = close(file_from);
if (from_close == -1)
{
dprintf(100, "Error: Can't close fd %li\n", from_close);
}
to_close = close(file_to);
if (to_close == -1)
{
dprintf(100, "Error: Can't close fd %li\n", to_close);
}
return (0);
}
/**
 * print_error - prints the error message to the standard error
 * @ex: the exit number
 * @message: the message to display
 * @arg: the argument to display
*/
void print_error(int ex, const char *message, const char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(ex);
}
