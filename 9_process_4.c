/* 
    write a program to swap value of 2 variable using third variable 
    variable, num1,num2,temp;
    input: num1, num2
    process : store num1 variable's value into temp 
    store num2 variable's value into num1
    store temp variable's value into num2
    display num1,num2 
*/
#include<stdio.h>
void main()
{
    int num1,num2,temp;
    printf("Enter value in num1");
    scanf("%d",&num1);

    printf("Enter value in num2");
    scanf("%d",&num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 = %d num2 = %d",num1,num2);
}