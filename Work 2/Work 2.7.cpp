#include <stdio.h>
#define str 256
int main ()

{
	char st [str];
	
	int i, l;
	
	for (i = 0 ; i < str ; i ++ )
	{
		char si;
		scanf ("%c", &si);
		if (si == '\n')
		{
			break;
		}
		else
		{
			st [ i ] = si;
		}
	}
	
	for ( int j = 0 ; j < i ; j ++ )
	{
		int k = 0;
		char prov [256];
		char si = st [ j ];
		for (l = 0 ; l <= i ; l ++)
		{
			if (si == prov [ l ])
			{
				l = 0;
				break;
			}
			if (si == st [ l ])
			{
				k++;
			}
		}
		if (l != 0)
		{
			printf ("|%c|%d|\n",si, k);
		}
		prov [j] = si;
	}
}
