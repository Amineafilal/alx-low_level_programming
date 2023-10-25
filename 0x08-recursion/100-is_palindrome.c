nclude "main.h"
/**
 * find_lenght - size of string.
 * @s: input value.
 * Return: Return the value of the lenght.
*/
int find_lenght(char *s)
{
	int lenght = 0;

	if (*(s + lenght))
	{
		lenght++;
		lenght += find_lenght(s + lenght);
	}
	return (lenght);
}

/**
 * verify_palindrome - verify string is a palindrome.
 * @s: input value.
 * @i: input value.
 * @lenght: input value.
 * Return: Return the value of 0
*/
int verify_palindrome(char *s, int lenght, int i)
{
	if (s[i] == s[lenght / 2])
	{
		return (1);
	}
	if (s[i] == s[lenght - i - 1])
	{
		return (verify_palindrome(s, lenght, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Write a function that returns 1 if a string is a palindrome
 * @s: input value
 * Return: Return value s,lenght,start
*/

int is_palindrome(char *s)
{
	int start = 0;
	int lenght = find_lenght(s);

	if (!(*s))
	{
		return (1);
	}
	return (verify_palindrome(s, lenght, start));
}
