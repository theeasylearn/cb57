/******************************************************************************

 write a program to findout factorial of given number
    input : 5
    process : 5 x 4 x 3 x 2 x 1
    output : 120

*******************************************************************************/
#include<stdio.h>
void main()
{
    int number,factorial;
    printf("enter number:");
    scanf("%d",&number);
    
    factorial=number;
    
    while(number>1)
    {
       number=number-1;
       factorial=factorial*number;
    }
    printf("%d",factorial);
}