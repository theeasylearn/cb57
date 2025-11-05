/******************************************************************************

 write a program to print following pattern
    1   3   5   7   9   11  13  15  17  .... 99

*******************************************************************************/
#include<stdio.h>
void  main()
{
    int number;
    number=1;
    
    while(number<=99)
    {
        printf("%5d",number);
        number=number+2;
    }
    
    printf("%3d",number);
}
