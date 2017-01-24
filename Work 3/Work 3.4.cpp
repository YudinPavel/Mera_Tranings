#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define Arr 256

char shift ( char * arr, int str);

int main()
{
    int i, j = 0, res = 0, max;
    char arr[Arr];
    
    gets (arr);
    
    printf ("Enter number of digits:");
    scanf ("%d", &max);
    max = pow (10, max);
    
    int str = strlen(arr);
    
    while (j <= str )
    {
        if (arr[0] >= 'a' && arr[0] <= 'z' || arr[0] >= 'A' && arr[0] <= 'Z')
        {
            shift(arr, str);
        }
        
        else
        {
            int val = atoi(arr);
            
            while (val >= max)
            {
                res += val % max;
                val /= max;
            }
            
            res += val;

            while (arr[0] >= '0' && arr[0] <= '9')
            {
                shift(arr, str);
            }
            
        }
        
        j++;
        
    }
    
    printf ("|%d|", res);
}

char shift (char * arr, int str)
{
    int i = 0;
    
    while (i != str + 1)
    {
        arr[i] = arr[i+1];
        i++;
    }
    
    return *arr;    
}
