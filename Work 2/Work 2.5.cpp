#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    char arr[10][8], i, j, a = 0, b = 0, c = 0, f;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            int r;
            r = rand() % 3;
            switch (r)
            {
            case 0:
            {
                f = 48 + rand() % 9;
                arr[i][j] = (char)f;
                a++;
            }
            break;
            case 1:
            {
                f = 65 + rand() % 25;
                arr[i][j] = (char)f;
                b++;
            }
            break;
            case 2:
            {
                f = 97 + rand() % 25;
                arr[i][j] = (char)f;
                c++;
            }
            break;
            }
        }
        if (a <= 1)
        {
            f = 48 + rand() % 9;
            arr[i][rand() % 7] = (char)f;
        }
        if (b <= 1)
        {
            f = 65 + rand() % 25;
            arr[i][rand() % 7] = (char)f;
        }
        if (c <= 1)
        {
            f = 97 + rand() % 25;
            arr[i][rand() % 7] = (char)f;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
