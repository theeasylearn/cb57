/******************************************************************************

 write a program to display multiplication table of given number as below
    input : 5
    output :
    5 X 1 = 5
    5 X 2 = 10
    5 X 3 = 15
    5 X 3 = 15
    ...
    ...
    5 X 10 = 50

*******************************************************************************/
#include<stdio.h>
void main()
{
    int number,multiplier,answer;
    printf("enter a number:");
    scanf("%d",&number);
    
    multiplier=1;
    
    while(multiplier<=10)
    {
        answer=number*multiplier;
        printf("%d *  %2d =%3d\n",number,multiplier,answer);
        multiplier++;
    }
}
