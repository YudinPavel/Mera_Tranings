#include <stdio.h>

int main()
{
    int H, M, S, prov;
    printf("Enter the time (HH:MM:SS)\n");
    prov = scanf("%d:%d:%d", &H, &M, &S);
    if (prov == 0 || H < 0 || H > 23 || M < 0 || M>59 || S < 0 || S > 59)
    {
        printf("Error!\n");
        getchar();
    }
    else
    {
        if (H > 5 && H < 12)
        {
            printf("Good Morning!\n");
        }
        if (H > 11 && H < 16)
        {
            printf("Good Day!\n");
        }
        if (H > 15 && H < 23)
        {
            printf("Good Evening!\n");
        }
        if (H > 22 || H < 6)
        {
            printf("Good Night!\n");
        }
    }
    getchar();
    return 0;
}
