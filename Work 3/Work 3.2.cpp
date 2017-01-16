#include <stdio.h>
#include <string.h>

#define ARR 256

int main()
{
    char str[ARR];
    int i, k = 0, s = 1;

    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            printf("%c", str[i]);
            k++;
        }
        else if (k != 0)
        {
            s++;
            printf("\t\t:letters: %d", k);
            k = 0;
            printf("\n");
        }
    }

    printf("\t\t|letters: %d\t\t\n %d words ", k, s);

    return (0);
}
