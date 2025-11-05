// write a program to calculate & display compound interest of given amount, rate, year
#include <stdio.h>
void main()
{
    int year;
    float amount, rate, interest = 0, total_interest = 0;
    printf("Enter amount");
    scanf("%f", &amount);

    printf("Enter rate");
    scanf("%f", &rate);

    printf("Enter year");
    scanf("%d", &year); //5

    while (year >= 1)// 5>=1
    {
        interest = (amount * rate * 1) / 100;
        amount = amount + interest; // 2nd year amount
        total_interest = total_interest + interest;
        year = year - 1;
    }

    printf("%.2f", total_interest);
}