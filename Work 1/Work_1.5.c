#include <stdio.h>
#define array 256

int main()
{
    printf("Enter text\n");
    char arr[array];
    int i, o;
    for (i = 0; i < array; ++i)
    {
        char t;
        scanf("%c", &t);
        if (t == '\n')
        {
            break;
        }
        else
        {
            arr[i] = t;
        }
    }
    o = 59 - i;
    for (i = o; i > 0; i--)
    {
        printf(" ");
    }
    printf("%s", arr);
    return 0;
}
