#include <stdio.h>

int main()
{
    //unsigned int i=2147483648;
    signed int i=424967295;
    float f;
    double d;
    char ch;

    printf("\nsizeof int = %ld valueof i=%d",sizeof(i),i);
    printf("\nsizeof float = %ld",sizeof(f));
    printf("\nsizeof double = %ld",sizeof(d));
    printf("\nsizeof char =%ld",sizeof(ch));
    printf("\n\n");
    return 0;
}