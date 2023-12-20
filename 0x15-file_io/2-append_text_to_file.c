#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: text to be appended
 * Return: (1) on success or (-1) on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
int r;
if (filename == NULL || text_content == NULL)
{
return (-1);
}
file = fopen(filename, "a");
if (file == NULL)
{
return (-1);
}
r = fputs(text_content, file);
if (r == EOF)
{
fclose(file);
return (-1);
}
fclose(file);
return (1);
}
