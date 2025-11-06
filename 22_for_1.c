// write a program to print all days of january in reverse order 
//  31 30 29 ......... 1
#include<stdio.h>
void main()
{
    int day;

    for(day=31;day>=1;day=day-1) // < > <= >= != ==
    {
        printf("%5d ",day); 
    }
   
   


}