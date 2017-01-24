#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Arr 256

int main()
{
    int i, l, j = 0;
    char arr[Arr];
    
    gets (arr);
    
    int str = strlen(arr);
    
    char *let = (char*) calloc( str, sizeof(char));
    int *numb = (int*) calloc( str, sizeof(int));
    
    for (i = 0; i <= str; i++)
    {
        int type = 0;
        
        for(l = 0; l < str; l++)
        {
            if (arr[i] == let[l])
            {
                j++;
                break;
            }
            
            if (arr[i] == arr[l])
            {
                type++;
            }    
        }
        
        if (l == str)
        {
            let[i - j] = arr[i];
            numb[i - j] = type;
        }
    }
    
    for (i = 0; i <= str-j; i++)
    {
        for (l = str-j; l > 0; l--)
        {
            if(numb[l] < numb[l-1])
            {
                int n;
                char le;
                le = let[l];
                n = numb[l];
                let[l] = let[l-1];
                numb[l] = numb[l-1];
                let[l-1] = le;
                numb[l-1] = n;
            }
        }
    }
    
    
    for (i = 0; i <= str-j; i++)
    {
        printf ("|%c|", let[i]);
        printf ("%d|\n", numb[i]);
    }
    
}
