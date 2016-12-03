#include <stdio.h>

int main()
{
    char arr[256];
    int i, j, l, k;
    for (i = 0; i < 256; ++i)
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
   
    for (k = 0; k <= i; k++)
    {
        if (arr[k] == ' ')
        {
            if (arr[k + 1] == ' ')
            {
                while (arr[k + 1] == ' ')
                {
                    for (int l = k; l < i; l++)
                    {
                        arr[l] = arr[l + 1];
                    }
                }
            }
        }
    }
 
    while (arr[0] == ' ')
    {
        for (j = 0; j < i; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    printf("%s", arr);
}
