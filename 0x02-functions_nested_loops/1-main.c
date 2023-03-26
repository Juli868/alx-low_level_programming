#include "main.h"

/**
 * orint_alphabet : will print all aphabets 
 */

void print_alphabet(void)
{
        char a[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for (i = 0 ; i < 26; i++)
        {
                _putchar(a[i]);
        }
        _putchar('\n');
}
