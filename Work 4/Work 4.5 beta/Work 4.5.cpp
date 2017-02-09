#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR 256

int main()
{
    FILE *mf;
    char arr[ARR][ARR];
    mf = fopen("text.txt", "r");
    
    int i, j;
    int numb_str = 0;
    for (i = 0; i < ARR; i++)
    {
        for(j = 0; j < ARR; j++)
        {
            char temp;
            fscanf (mf, "%c", &temp);
            if (temp == '\n' || feof(mf) )
            {
                break;
                temp++;
                numb_str++;
            }
            
            else
            {
                arr[i][j] = temp;
            }
        }
    }
    printf("numb_str:%d\n", numb_str);
    int str[ARR];
    
    for (j = 0; j <= 6; j++)
    {
        str[j] = j;
    }
    
    int k,l;
    for (k = 0; k < 6; k++)
    for (l = 6; l > 0; l--)
    {
        printf("\n|||||||!%d!|||||||\n",strlen(arr[l]));
        if (strlen(arr[l]) > strlen(arr[l-1]))  
        {
            int temp = str[l];
            str[l] = str[l-1];
            str[l-1] = temp;
            for (j = 0; j <= 6; j++)
    {
        printf ("%d", str[j]);
    }
        
        }
    }
    
    
    
    for (i = 0; i <= 6; i++)
    {
        printf ("\n%s\n", arr[str[i]]);
    }
    
}
