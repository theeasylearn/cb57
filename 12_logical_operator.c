#include<stdio.h>
void main()
{
    //declaration with initilization
    int a=20,b=20,c=20,d=30,result;

    result = a == b && b == c; // 20 == 20 && 20 == 20
    printf("%d = %d == %d && %d == %d",result,a,b,b,c);
    result = a == b && b == d; // 20 == 20 && 20 == 30
    printf("\n%d = %d == %d && %d == %d",result,a,b,b,d);
    result = a == d && b == d; // 20 == 30 && 20 == 30
    printf("\n%d = %d == %d && %d == %d",result,a,d,b,d);

    result = a < d || b < d; // 20 < 30 (1) 20 < 30 (1)
    printf("\n%d = %d < %d || %d < %d",result,a,d,b,d);

    result = d < a || b < d; // 30 < 20 (1) 20 < 30 (1)
    printf("\n%d = %d < %d || %d < %d",result,d,a,b,d);

    result = d < a || d < c; // 30 < 20 () 30 < 20 ()
    printf("\n%d = %d < %d || %d < %d",result,d,a,d,d);

    result = !(a == d);
    printf("\n%d = !(%d ==%d)",result,a,d);


}