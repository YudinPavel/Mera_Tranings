#include <stdio.h>

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
