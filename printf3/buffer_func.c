#include "main.h"

/**
 * string_buffer - buffer to hold string before printing
 * Return: pointer to buffer created
 */
char *string_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * realloc_buffer - reallocate buffer and free it
 * @buffer: buffer holding strings to output
 * @len: length of string to output
 * @ap: va_list (argument parameters)
 */
void realloc_buffer(char *buffer, int len)
{
	char *buffer_new;

	buffer_new = realloc(buffer, len);
	write(1, buffer_new, len);

	free(buffer_new); 
}


/**
  * buffer_overflow - set length position back to 0, when buffer overflow
  * @buffer: buffer containing string to output
  * @pos: position in buffer
  * Return: position in length
  */

int buffer_overflow(char *buffer, int pos)
{
	if (pos > 1020)
	{
		write(1, buffer, pos);
		pos = 0;
		
	}
	return (pos);
}
