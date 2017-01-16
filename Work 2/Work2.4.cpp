#include <stdio.h>

#define A 256

int main()
{
    char arr[A];
    int i;

    for (i; i < 255; i++)
    {
        char c;
        scanf("%c", &c);
        if (c == '\n')
            break;
        else
            arr[i] = c;
    }
    int l;

    for (i; i > 0; i--)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            for (l = 0; l < i; l++)
            {
                if (arr[l] >= '0' && arr[l] <= '9')
                {
                    char c;
                    c = arr[i];
                    arr[i] = arr[l];
                    arr[l] = c;
                    break;
                }
            }
        }
    }
    printf("%s", arr);
    return (0);
}

