#include<stdio.h>
void main()
{
    //declaration with initilization
    int a = 10, b = 2, c = 3;
    printf("\na = %d b = %d c = %d",a,b,c);

    // a = a + b; or  //12
    a+=b;
    printf("\na = %d b = %d ",a,b);

    // a = a - b; or 
    a-=b; //10
    printf("\na = %d b = %d ",a,b);

    // a = a * b; or 
    a*=b; //20
    printf("\na = %d b = %d ",a,b);

    // a = a / b; or 
    a/=b; //10
    printf("\na = %d b = %d ",a,b);

    // a = a % c; or 
    a%=c; 
    printf("\na = %d c = %d ",a,c);

}
