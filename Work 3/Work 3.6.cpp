#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int N, *str, i, imax = 0, imin = 0, sum = 0, max, min;
    printf("Enter N:");
    scanf("%d", &N);
    str = (int*)calloc(N, sizeof(int));

    str[0] = -100 + rand() % 200;
    printf("%d;", str[i]);
    max = str[0], min = str[0];

    for (i = 1; i < N; i++)
    {
        str[i] = -100 + rand() % 200;
        printf("%d;", str[i]);
        if (str[i] < min)
        {
            min = str[i];
            imin = i;
        }
        if (str[i] > max)
        {
            max = str[i];
            imax = i;
        }
    }

    if (imin > imax)
    {
        for (i = imax + 1; i < imin; i++)
        {
            sum += str[i];
        }
    }

    else
    {
        for (i = imin + 1; i < imax; i++)
        {
            sum += str[i];
        }
    }

    printf("\n%d", sum);
}
