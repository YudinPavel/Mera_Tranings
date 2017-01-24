#include <stdio.h>
#include <string.h>

#define Arr 256

int main()
{
    char str[Arr];
    int i, n, k = 0;
    
    gets (str);
    
    printf ("Enter n word:");
    scanf ("%d", &n);
    
    for(i = 0; i <= strlen(str); i++)
    {
        if (k == n-1)
        {
            printf ("%c", str[i]);
        }
        
        if (str[i] == ' ')
        {
            k++;
        }
    }
    
    if (n-1 > k)
    {
        printf ("Error!");
    }
}
