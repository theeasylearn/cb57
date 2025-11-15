// write a findout total weight all person in family. also findout average weight of person
#include <stdio.h>
// create constant (read only variable)
#define SIZE 5
void main()
{
    // array declaration with initilization
    float weight[SIZE] = {50.25, 55.25, 60.99, 75.77, 25.36};
    float total = 0, average;
    int index = 0;
    while(index<SIZE)
    {
        total = total + weight[index];
        index = index + 1;
    }
    average = total / SIZE;
    printf("total = %.2f average = %.2f",total,average);
}