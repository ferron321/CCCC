#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    int chislo = rand() % 100 +1;
    //printf("chislo=%d\n",chislo);
    int c;
    printf("hello you need to wite a number down below to find what number i riddle for you\n");
    getchar();

    do
        {
            printf("Write a number \t= ");
            scanf("%d",&c);
        if (c > chislo){printf("Number is more than needed\n");}
            
        if (c < chislo){printf("Number is less than needed\n");}
            
        if (c == chislo){printf("you win\n");  break;
        }
        
        }
        while(1);
        getchar();
        
    
   

}