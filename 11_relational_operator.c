#include<stdio.h>
void main()
{
    //declaration with initilization
    int a=20,b=20,result;

    result = a == b; // 10 == 20
    printf("%d = %d == %d",result,a,b);

    result = a != b; // 10 != 20
    printf("\n%d = %d != %d",result,a,b);

    result = a < b; // 10 < 20
    printf("\n%d = %d < %d",result,a,b);

    result = a > b; // 10 > 20
    printf("\n%d = %d > %d",result,a,b);

    result = a <= b; // 10 <= 20
    printf("\n%d = %d <= %d",result,a,b);

    result = a >= b; // 10 >= 20
    printf("\n%d = %d >= %d",result,a,b);


}