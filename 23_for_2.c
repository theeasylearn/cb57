// 1 4 27 16 625 .... 100
// 1 2  3  4 5  ....... 100
#include <stdio.h>
void main()
{
    int num, answer;

    for (num = 1; num <= 100; num = num + 1)
    {
        if (num % 2 == 1)
        {
            answer = num * num * num;
        }
        else
        {
            answer = num * num; // 4
        }
        printf("\t %d", answer);
    }
}