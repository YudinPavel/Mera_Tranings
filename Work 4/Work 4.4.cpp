#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARR 256

int main ()
{
    char str[ARR];
    char** pointer;
    gets (str);
    
    int i, space;
    while(i != strlen(str))
    {
        if (str[i] == ' ')
        {
            space++;
        }
        
        i++;
    }
    pointer = (char**) calloc ( space, sizeof(char*));
    
    pointer[0] = &str[0];
    
    int numb_pointer = 0;
    for (i = 1; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            numb_pointer++;
            pointer[numb_pointer] = &str[i+1];
        }
    }
    
    for ( numb_pointer ; numb_pointer >= 0; numb_pointer--)
    {
        i = 0;
        while(pointer[numb_pointer][i] != ' ')
        {
            printf ("%c", pointer[numb_pointer][i]);
            i++;
            if (pointer[numb_pointer][i] == '\0')
            {
                break;
            }
        }
        printf (" ");
    }
}
