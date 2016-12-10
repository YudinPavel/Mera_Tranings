#include <stdio.h>
#define array 256

int main()
{
    char arr[array];
    int i, k=1;
    
	for (i = 0; i < array; ++i)
    {
        char t;
        scanf("%c", &t);
        if (t == '\n')
        {
            break;
        }
        else
        {
            if (t == ' ')
            {
            	k++;
        	}
        }
    }
    printf ("%d", k);
}
