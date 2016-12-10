#include <stdio.h>

int main()
{
    int i, j, l, N;
    printf("Enter number of lines:\n");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (l = N - i; l >= 0; l--)
        {
            printf(" ");
        }
        for (j = i * 2; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
