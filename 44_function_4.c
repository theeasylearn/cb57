#include <stdio.h>
//write a program that will convert negative values into positive values inside array
#define SIZE 5 
// size is (global variable)
// #function has array as arguments
void verifyMarks(int marks[])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("\n %d",marks[i]); //-50
        //put your logic here that convert negative number into positive 
    }
}
void main()
{
   int marks[SIZE] = {-50,-48,10,25,-30};
   verifyMarks(marks); 
   
}