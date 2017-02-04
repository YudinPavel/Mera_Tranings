#include <stdio.h>
#include <string.h>

#define ARR 256


int main()
{
    int i;
    char arr[ARR];
    char *begin, *end;
    
    gets(arr);
    
    int str = strlen(arr)-1;
    
    for (i = 0; i < str; i++)
    {
        begin = &arr[i];
        end = &arr[str - i];
        if (*begin != *end)
        {
            printf ("This is not palindrome");
            break;
        }
    }
    if (i == strlen(arr) - 1)
    {
        printf ("This is palindrome");
    }
    return 0;
}
