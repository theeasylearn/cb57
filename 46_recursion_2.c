// write a program to convert decimal nummber into binary number
// number = 63 ->  0111111
// number = 100 -> 01100100
#include <stdio.h>
// define
void binary(int number) // 10
{
    int reminder;
    if (number > 0)
    {
        reminder = number % 2; // 0
        number = number / 2; // 5
        binary(number);
        printf("%d ", reminder);
    }
}
void main()
{
    int number;
    printf("Enter number");
    scanf("%d", &number); // 10
    binary(number);
}