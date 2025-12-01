#include <stdio.h>
// pass by refernce in function
// without return value with argument function
void swap(int *a, int *b) //pointer variables (to store address of variable)
{
    int temp;
    printf("\n in swap function ->  before swap a = %d b = %d", *a, *b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\n in swap function ->  after swap a = %d b = %d", *a, *b);
}
void main()
{
    int a = 10;
    int b = 20;
    printf("\n in main function ->  before swap a = %d b = %d", a, b);
    swap(&a,&b); //pass address of variable
    printf("\n in main function ->  after swap a = %d b = %d", a, b);
}