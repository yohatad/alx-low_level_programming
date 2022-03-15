#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));

}
