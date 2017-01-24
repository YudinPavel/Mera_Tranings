#include <stdio.h>
#include <string.h>

#define ARR 256

int main()
{
	char arr[ARR];
	int i, max = 0, k = 1, imax = 0;
	
	gets (arr);
	
	for (i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == arr[i+1])
		{
			k++;
		}
		
        else
		{
			if ( k > max)
			{
				max = k;
				imax = i-(k-1);
				k = 1;
			}
		}
		printf ("|%d|%d|%d|\n", max, imax,k);
	}
	printf ("\n%d\t", max);
	for (i = imax; i < imax + max; i++)
	{
		printf ("%c", arr[i]);
	}
}
