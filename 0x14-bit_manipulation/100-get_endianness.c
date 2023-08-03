#include "main.h"
/**
 * get_endianness - proves if the system is big or little endian
 * Return 0 f big or 1 f little.
 */
int get_endianness(void)
{
	unsigned int checker = 1;
	char *ptr;

	ptr = (char *) &checker;
	if (*ptr == 1)
		return (1);
	return(0);
}
