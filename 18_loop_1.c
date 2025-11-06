/******************************************************************************

 write a program to print following pattern
    1   3   5   7   9   11  13  15  17  .... 99

*******************************************************************************/
#include<stdio.h>
void  main()
{
    int number;
    number=1; //initilization
    
    while(number<=99) //condition
    {
        printf("%5d",number);
        number=number+2; //increment/decrement
    }
    
    printf("%3d",number);
}
