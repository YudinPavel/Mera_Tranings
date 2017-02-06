#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR 256

int main()
{
    char **arr, **young, **old, str[ARR];
    int a, i, j, AgeMax = 0, AgeMin = 200, Age;
    printf ("How many relatives?\n");
    scanf ("%d", &a);
    arr = (char**) calloc (a, sizeof(char*));
    getchar();
    
    for (i = 0; i < a; i++)
    {
        printf ("Enter Age_Name:\n");
        gets (str);
        arr[i] = (char*) calloc (strlen(str), sizeof(char));
        
        for (j = 0; j < strlen(str); j++)
        {
            arr[i][j] = str[j];
        }
        
        if ( atoi(arr[i]) > AgeMax )
        {
            AgeMax = atoi(arr[i]);
            young = &arr[i];
        }
        
        if ( atoi(arr[i]) < AgeMin)
        {
            AgeMin = atoi(arr[i]);
            old = &arr[i];
        }
    }
    
    printf ("young: %s\n old: %s", *young, *old);
    
}
