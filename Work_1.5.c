#include <stdio.h>

int main()
{
    printf("Enter text\n");
    char arr[256];
    int i, o;
    for (i = 0; i < 256; ++i)
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
    getchar();
    return 0;
}
