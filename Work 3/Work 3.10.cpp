#include <stdio.h>
#include <string.h>

#define Arr 256

int main()
{
    char str[Arr];
    int i, n, k = 0, var, l;
    
    gets (str);
    
    printf ("Enter n word:");
    scanf ("%d", &n);
    
    for(i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            k++;
        }
        
        if (k == n-1)
        {            
            var++;
            l = i;
        }    
    }
    
    for( i = l-(var-1) ; i <= strlen(str); i++)
    {
        str[i] = str[i+var];
    }
    
    if (n-1 > k)
    {
        printf ("Error!");
    }
    else
    {
        printf ("%s", str);
    }
}
