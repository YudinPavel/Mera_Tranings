#include <stdio.h>
#include <string.h>

#define ARR 256

int main()
{
    char str[ARR];
    int i, k = 0, max = 0, imax = 0;

    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            k++;
        }
        else if (k != 0)
        {
            if (k > max)
            {
                max = k;
                imax = i - k;
            }
            k = 0;
        }
    }

    if (k > max)
    {
        max = k;
        imax = i - k;
    }

    for (i = imax; i < imax + max; i++)
    {
        printf("%c", str[i]);
    }

    printf("\t%d", max);
}
