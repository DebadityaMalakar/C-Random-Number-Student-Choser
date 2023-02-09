#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>     
int main()  
{  
    int i, num;  
    printf ("The choosen students are :");  
    // for (i = 1; i <= 3; i++)  
    // {  
    //     num = rand() % 100 + 1; // use rand() function to get the random number  
    //     printf (" %d ", num);   
    // } 
    i=1;
    while (i <=3)
    {
        /* code */
        num=rand()%100+1;
        printf(" %d ",num);
        i+=1;
    }
     
}  