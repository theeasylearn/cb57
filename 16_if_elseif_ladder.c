/*write a program to accept body temprature from from user in farenhit and then display  fever level as per chart.*/
#include<stdio.h>
void main()
{
    int fh;

    printf("enter your body temprature:");
    scanf("%d",&fh);

    if(fh>=97 && fh<=98.6)
    {
        printf("you are normal");
    }
    else if(fh>=98.6 && fh<=100.4)
    {
        printf("you have normal fever");
    }
    else if(fh>=100.4 && fh<=103)
    {
        printf("you have fever");
    }
    else
    {
        printf("you have high fever");
    }

}