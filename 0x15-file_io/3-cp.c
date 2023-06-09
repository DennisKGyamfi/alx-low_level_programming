#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
*
* Return: A ptr to the newly-allocated buffer.
*/

char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
* close_file - Closes file descriptors.
* @fd: file descriptor to be closed.
*/
void close_file(int fde)
{
int cl;

cl = close(fde);

if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fde %d\n", fde);
exit(100);
}
}

/**
* main - Copies a file's content to another file.
* @argc: number of arguments supplied to the program.
* @argv: array of ptrs to the arguments.
*
* Return: 0 (success).
*
* Description: If the argument count is incorrect - exit code 97.
*              If file_from does not exist or cannot be read - exit code 98.
*              If file_to cannot be created or written to - exit code 99.
*              If file_to or file_from cannot be closed - exit code 100.
*/

int main(int argc, char *argv[])
{
int fr, to, v, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
fr = open(argv[1], O_RDONLY);
v = read(fr, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (fr == -1 || v == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(to, buffer, v);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

v = read(fr, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (v > 0);

free(buffer);
close_file(fr);
close_file(to);

return (0);
}
