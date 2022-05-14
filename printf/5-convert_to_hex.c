/**
  * hex_convert - convert argument to hexadecimal
  * @str: the given argument
  * @hex: the equivalent hexadecimal
  * Return 0
  */



void hex_convert(char *str, char *hex)
{
	int i, j = 0;

	for (i = 0; i < strlen(givenStr); i++)
	{
		sprintf(hexStr + j, "%02X", givenStr[i]);
		j += 2;
	}
	hex[j] = '\0';
}

