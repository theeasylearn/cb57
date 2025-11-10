#include <stdio.h>
// write a program to reverse given number
// input : 12345 reverse 54321
void main()
{
    int amount, digit, reverse = 0;
    printf("Enter amount");
    scanf("%d", &amount); // 12345
    do
    {
        // get last digit
        digit = amount % 10;              // 5
        reverse = (reverse * 10) + digit; // 5
        amount = amount / 10;             // 1234
    }while(amount>0);
    printf("%d", reverse);
}