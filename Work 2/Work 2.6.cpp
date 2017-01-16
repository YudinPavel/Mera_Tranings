#include <stdio.h>
#define ARRAY 256

int main()
{
    char arr[ARRAY];
    int i, j, l, k;

    gets(arr);

    for (i = 0; i < ARRAY; i++)
    {
        if (arr[i] != ' ')
        {
            break;
        }
    }

    for (l = 0; l <= ARRAY; l++)
    {
        arr[l] = arr[l + i];
    }

    for (k = 0; k < ARRAY;)
    {
        if (arr[k] == ' ' && arr[k + 1] == ' ')
        {
            for (l = k; l < ARRAY; l++)
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
    return 0;
}
