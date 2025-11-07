// write a program to make sum of all digits in given amount
// input : 12345 process : 1+2+3+4+5 output : 15
#include <stdio.h>
void main()
{
    int amount, digit, total;
    printf("Enter amount");
    scanf("%d", &amount); // 12345
    for(total=0;amount>0;amount=amount/10)
    {
        //loop body
        digit = amount % 10;  // 5
        total = total + digit; //5
    }    
    //printf("digit = %d", digit);
    printf(" total = %d", total);
}