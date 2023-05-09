#include "main.h"

/**
* append_text_to_file - Adds text at the end of a file.
* @filename: A ptr to the name of the file.
* @text_content: The string to concat at the end of the file.
*
* Return: -1 -  If the function fails or filename is NULL.
*        -1 If the file does not exists.
*         else return 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int i, z, le = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (le = 0; text_content[le];)
le++;
}

i = open(filename, O_WRONLY | O_APPEND);
z = write(i, text_content, le);

if (i == -1 || z == -1)
return (-1);

close(i);

return (1);
}
