#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define ARR 256


int main()
{
    int i = 0, str[ARR], j, k;
    char **len = NULL, arr[ARR];;
    do
    {
        gets (arr);
        str[i] = strlen(arr);
        len = (char**) realloc (len, (i + 1) * sizeof(char*));
        len[i] = (char*) calloc (strlen(arr), sizeof(char));
        
        for (int j = 0; j < strlen(arr); j++)
        {
            len[i][j] = arr[j];
        }
        
        i++;
    }
    while (strlen(arr) != 0);
    
    for (j = 0; j < i; j++)
    {
        for (k = i; k > 0; k--)
        {
            if (str [k] < str[k-1])
            {
                int n;
                char *le;
                le = len[k];
                n = str[k];
                len[k] = len[k-1];
                str[k] = str[k-1];
                len[k-1] = le;
                str[k-1] = n;
            }
        }
    }
    
    for (j = 0; j < i; j++)
    {
        printf ("\n%s\n", len[j]);
    }
    
    return 0;
} 
