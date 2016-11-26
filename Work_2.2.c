#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    printf("                                         *\n                                        ***\n                                       *****\n                         *************************************\n");
    printf("                            !!!GAME <<GUESS THE NUMBER>>!!!\n                               !For Playing Press Enter!\n                         *************************************\n");
    char h;
    getchar();
    srand(time(NULL));
    int secret = rand() % 100, i, N;
    printf("                            The maximum number of attempts:\n");
    scanf("%d", &N);
    printf("                                      Your guess?\n");
    for (i = 1; i <= N; i++)
    {
        int b;
        scanf("%d", &b);
        if (b == secret)
        {
            printf("                               You win! Secret number = %d\n", secret);
            break;
        }
        else if (b > secret)
        {
            printf("                                  Secret number larger!\n");
        }
        else
        {
            printf("                                   Secret number less!\n");
        }
    }
    if (i == N + 1)
        printf("                                       You lose...\n");
    else
        printf("                           Congratulations! Number if attempts: %d.\n", i);
}
