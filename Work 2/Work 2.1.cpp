#include <stdio.h>
#include <math.h> 
#include <unistd.h> 

#define g 9.81

int main()
{
    float h, t;
    printf("Enter hight\n");
    scanf("%f", &h);
    if (h < 0)
    {
	printf ("Error!");
	}
	else
    {
    	t = sqrt(2 * h / g);
    	for (int i = 0 ; i < t ; i ++)
		{
    		float L =(g*((float)i*(float)i))/2;
    		printf ("t = %d : L = %f\n", i, L);
    		sleep (1);
		}
		printf("BABAH!!!\n");
	}
}
