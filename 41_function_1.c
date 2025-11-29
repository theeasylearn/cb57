#include <stdio.h>
// 1   without return value without argument(input) function
void printLine()
{
    printf("\n");
    for (int i = 1; i <= 100; i++)
    {
        printf("_");
    }
    printf("\n");
}
// 2   without return value with argument(input) function
void printLetter(char letter, int count)
{
    printf("\n");
    for (int i = 1; i <= count; i++)
    {
        printf("%c", letter);
    }
    printf("\n");
}
// 3   with return value without argument function
float getPi()
{
    float pi = 22.0 / 7; // local variable
    return pi;
}
// 4   with return value with argument function
int getSquare(int number)
{
    int square = number * number; // local variable
    return square;
}
void main()
{
    float pi;
    int number, square;
    // run/execute/call function
    printLine();
    printLetter('~', 90);
    printf("THE EASYLEARN ACADEMY");
    printLetter('|', 110);
    printLine();
    pi = getPi();
    printf("pi = %5.3f", pi);
    printf("Enter any number");
    scanf("%d", &number);
    square = getSquare(number);
    printf("square = %d", square);
}