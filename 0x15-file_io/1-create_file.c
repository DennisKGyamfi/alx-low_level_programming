#include "main.h"

/**
* create_file - Creates a file.
* @filename: A ptr to the name of the file to be created.
* @text_content: A ptr to a string to write to the file.
*
* Return: -1; If the function fails.
*         else 1;if success.
*/

int create_file(const char *filename, char *text_content)
{
int fde, z, le = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (le = 0; text_content[le];)
le++;
}

fde = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
z = write(fde, text_content, le);

if (fde == -1 || z == -1)
return (-1);

close(fde);

return (1);
}
