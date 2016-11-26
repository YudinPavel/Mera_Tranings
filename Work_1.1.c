#include <stdio.h>

int main()
{
    printf("Male or female(m/f)?\n");
    char g;
    scanf("%c", &g);
    float w, h, wn;
    printf("weight(kg):");
    scanf("%f", &w);
    printf("height(cm):");
    scanf("%f", &h);
    if (g == 'f' || g == 'm')
    {
        if (h < 0 || w < 0)
        {
            printf("Error!");
        }
        else
        {
            switch (g)
            {
            case 'f':
                wn = (h - 100)*0.85f;
            case 'm':
                wn = (h - 100)*0.9f;
            }
            float wnmin = wn-5.0f, wnmax = wn+5.0f;
            if ( w  < wnmin)
            {
                printf("you need to gain weight\n");
            }
            else
            {
                if (w > wnmax)
                {
                    printf("you need to lose weight\n");
                }
                else
                {
                    printf("your weight is normal");
                }
            }
        }
    }
    else
    {
        printf("Error!");
    }
    getchar();
    return 0;
}
