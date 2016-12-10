#include <stdio.h>
#define p 2.54
int main()
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
            cm = a * 12 * p;
            printf("%f cm", cm);
            break;
        case 'i':
            cm = a * p;
            printf("%f cm", cm);
            break;
        default:
            printf("Error!");
            break;
        }
    }
    return 0;
}
