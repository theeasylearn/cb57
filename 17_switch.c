/*write a program to do multiplication,addition ,division,substraction*/

#include<stdio.h>
void main()
{
    int num1,num2,choice;
    float result;

    printf("enter value for num1:");
    scanf("%d",&num1);

    printf("enter value for num2:");
    scanf("%d",&num2);

    printf("enter choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        result=num1+num2;
        break;

        case 2:
        result=num1-num2;
        break;

         case 3:
        result=num1*num2;
        break;

         case 4:
        result=num1/num2;
        break;

        default:
        printf("this is invalid choice");
    }

    if(choice>=1 && choice<=4)
    {
        printf("result=%11.2f",result);
    }
}