//  write a program to swap 2 variable's value without using 3rd variable.
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter value in num1");
    scanf("%d",&num1); //20

    printf("Enter value in num2");
    scanf("%d",&num2);

    printf("\n Before swap num1 = %d num2 = %d",num1,num2);
    num1 = num1 + num2;
    num2 = num1 - num2; 
    num1 = num1 - num2;
    printf("\n after swap num1 = %d num2 = %d",num1,num2);
}