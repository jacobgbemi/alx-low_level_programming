#include "main.h"

/**
 * append_text_to_file - append text to file, only if file exists.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL) /* get the string length */
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (!text_content) /* if no text to write, just run */
	{
		return (1);
	}

	w = write(o, text_content, len); /* write into file */
	if (o == -1 || w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);

	return (1);
}
