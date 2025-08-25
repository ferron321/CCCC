#include <stdio.h>           

int main(void)                      
{                 
    int first;
    int sec;
    int third;
    int sale;
    int sum;
    printf("write sum of first product");
    scanf("%d",&first);
    printf("write sum of second product");
    scanf("%d",&sec);
    printf("write sum of third product");
    scanf("%d",&third);
    printf("write sum of sale on product");
    scanf("%d",&sale);
    sum = (first + sec + third) - sale;
    printf("sum = %d \n", sum);
    if (sum >= 1000 )
    {printf(" Summa more than 1000 rubles");}
    else
    {printf( "summa less than 100 rubles");}
    
    return 0;                  
}


