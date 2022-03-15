#include "main.h"
/**
 * _isaplha -checks for alphabetic character
 * @c : charcater to check
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
