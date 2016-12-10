#include <stdio.h>
# define R 57.2958
# define D 0.0174

int main()
{
    printf("Enter angle  (D - Degree R - Radian ):\n");
    char s;
    float a, Res;
    scanf("%f%c", &a, &s);
    switch (s)
    {
    case 'R':
        Res = a * R;
        printf("%f D", Res);
        break;
    case 'D':
        Res = a * D;
        printf("%f R", Res);
        break;
    default:
        printf("Error!");
        break;
    }
    return 0;
}
