#include <stdio.h>
void main()
{
    int a = 10, b = 0;
    // b = a;         // 10
    // a = a + 1; // 11
    // OR
    b = a++; 
    printf("a = %d, b = %d",a,b);
    //(postfix)
}