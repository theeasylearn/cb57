// write a program to display given amount into words
// number = 63 -> six three
// number = 100 -> one zero zero
#include <stdio.h>

void intoWords(int number)
{
    if (number > 0)
    {
        int reminder;
        reminder = number % 10; // 3
        // printf("%d",reminder);
        number = number / 10;
        intoWords(number);
        if (reminder == 1)
            printf("one");
        else if (reminder == 2)
            printf("two");
        else if (reminder == 3)
            printf("three");
        else if (reminder == 4)
            printf("four");
        else if (reminder == 5)
            printf("five");
        else if (reminder == 6)
            printf("six");
        else if (reminder == 7)
            printf("seven");
        else if (reminder == 8)
            printf("eight");
        else if (reminder == 9)
            printf("nine");
        else
            printf("zero");
        printf(" ");
    }
}
void main()
{
    int number;
    printf("Enter amount");
    scanf("%d", &number); // 123
    intoWords(number);
}