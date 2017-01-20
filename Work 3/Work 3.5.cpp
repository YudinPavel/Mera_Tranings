#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N, *str, i, i1 = -1, i2 = -1, sum = 0;
	printf ("Enter N:");
	scanf ("%d", &N);
	str = (int*) calloc (N, sizeof(int));
	
	for (i = 0; i < N; i++)
	{
		printf ("Enter %d figure: ", i+1);
		scanf ("%d", & str[i]);
	}
	
	for (i = 0; i < N; i++)
	{
		if ( str[i] < 0 && i1 == -1 )
		{
			i1 = i;
		}
		if ( str[N-i] > 0 && i2 == -1 )
		{
			i2 = N-i;
		}
		if ( i1 != -1 && i2 != -1 )
		{
			break;
		}
	}
	
	if ( i1 == -1 || i2 == -1 )
	{
		printf ("Error 404! Not Found!\n");
		return 0;
	}
	
	for (i = i1; i <= i2; i++)
	{
		sum += str[i];
	}
	
	printf ("%d", sum);
	return 0;
}
