#include <stdio.h>
// a b c d e f .... z
void main()
{
    // a = 97 b = 98 c = 99 z =122
    int ascii = 97;
    char alphabets;
    do
    {
        alphabets = ascii; // a
        printf("%c  ", alphabets);
        ascii++; // 98
    }while(ascii<=122);
}