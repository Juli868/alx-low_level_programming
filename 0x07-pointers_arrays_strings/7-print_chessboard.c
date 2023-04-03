#include "main.h"
/**
 *print_chessboard - brings onto the screen a chess like elements
 *@a the name of thestring in  a program but here referenced as shown
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i=0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

