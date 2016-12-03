#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int arr[8], i, g, j;
    srand(time(NULL));
    for (j = 0 ; j < 10 ; j ++ )
    {
        for (i = 0 ; i < 7 ; i ++)
        {
            arr[i] = rand() % 20;
            int g = arr [ i ];
            switch (arr[i])
            {
            case 10:
                g = 'T';
                printf("%c", g);
                break;
            case 11:
                g = 'N';
                printf("%c", g);
                break;
            case 12:
                g = 'b';
                printf("%c", g);
                break;
            case 13:
                g = 'i';
                printf("%c", g);
                break;
            case 14:
                g = 'Y';
                printf("%c", g);
                break;
            case 15:
                g = 'o';
                printf ("%c", g);
                break;
            case 16:
                g = 'G';
                printf("%c", g);
                break;
            case 17:
                g = 'v';
                printf("%c", g);
                break;
            case 18:
                g = 'k';
                printf("%c", g);
                break;
            case 19:
                g = 'i';
                printf("%c", g);
                break;
            case 20:
                g = 'r';
                printf("%c", g);
                break;
            default:
                printf("%d", g);
            }
        }
    printf("\n");
    }
    return 0;
}