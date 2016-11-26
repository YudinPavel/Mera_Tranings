#include <stdio.h>

int main()
{
    printf("Enter angle  (D - Degree R - Radian ):\n");
    char s;
    float a, Res;
    scanf("%f%c", &a, &s);
    switch (s)
    {
    case 'R':
        Res = a * 57.2958f;
        printf("%f D", Res);
        break;
    case 'D':
        Res = a * 0.0174f;
        printf("%f R", Res);
        break;
    default:
        printf("Error!");
        break;
    }
    getchar();
    getchar();
    return 0;
}

int Task4()
{
    printf("Enter distance (f - foot i - inch ):\n");
    char s;
    float a, cm;
    scanf("%f%c", &a, &s);
    if (a < 0)
    {
        printf("Error!");
    }
    else
    {
        switch (s)
        {
        case 'f':
            cm = a * 12 * 2.54f;
            printf("%f cm", cm);
            break;
        case 'i':
            cm = a * 2.54f;
            printf("%f cm", cm);
            break;
        default:
            printf("Error!");
            break;
        }
    }
    getchar();
    getchar();
    return 0;
}
