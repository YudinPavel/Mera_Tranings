#include <stdio.h>
#define array 256

int main()
{
    char arr[array];
    int i, j, l, k;
    
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
            arr[i] = t;
        }
    }
   
    while (arr[0] == ' ')
	{
            for (l = 0; l < i; l++)
        {
            arr[l] = arr [l + 1];
        }
    }
    
    for (k = 0; k < i;)
    {
        if ( arr[k] == ' ' && arr[k+1] == ' ')
		{
            for (l = k; l < i; l++)
            {
                arr[l] = arr[l + 1];
            }
        }
        else
        {
        	k++;
		}
    }
    printf("%s", arr);
}
