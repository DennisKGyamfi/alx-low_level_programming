#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Reads text file and prints to STDOUT.
* @filename: text file ro be read
* @letters: number of letters to be read
* Return: z- actual number of bytes read and printed
*        0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t fde;
ssize_t z;
ssize_t t;

fde = open(filename, O_RDONLY);
if (fde == -1)
return (0);
buff = malloc(sizeof(char) * letters);
t = read(fde, buff, letters);
z = write(STDOUT_FILENO, buff, t);

free(buff);
close(fde);
return (z);
}
