#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, g, j;
    srand(time(NULL));
    for (j = 0 ; j < 10 ; j ++ )
    {
        for (i = 0 ; i < 4 ; i ++)
        {
            g = rand() % 122;
            if (g >= 65 && g <= 90 || g >= 97 && g <= 122)
            {
            	printf ("%c", g);
			}
			else
			{
				printf ("%d", g);
			}
        }
    printf("\n");
    }
    return 0;
}
