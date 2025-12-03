// print 1 to 10 using recursion
#include <stdio.h>
void printCount(int count)
{
    if (count < 11)
    {
        printf("%5d", count);
        count++;           // 2
        printCount(count); // recursion
    }
    printf("(%d) ",count); //11 10 9 8 7 6 5 4 3 2 1 
}
void main()
{
    int count = 1;
    printCount(count); //
}