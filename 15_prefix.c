#include <stdio.h>
void main()
{
    int a = 10, b = 0;
    // a = a + 1; // 11
    // b = a;         // 10
    // OR
    b = ++a; //prefix 
    printf("a = %d, b = %d",a,b);
}