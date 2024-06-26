#include<stdio.h>

void swapValue(int a, int b)
{
    a=a+b;
    b=b-a;
    a=a-b;
    printf("\n(within fun\n)");
    printf("\nAddress of a=%u\nAddress of b=%u",&a,&b);
    printf("\n(within function) a=%d b=%d\n",a,b);
}

void swapRef(int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    printf("\n(within func ref)\n");
    printf("\nAdress of a=%u\nAdress of b=%u",&a,&b);
    printf("\nPointing Address of a=%u\nPointing Address of b=%u",a,b);
    printf("\n(within function) a=%d b=%d\n",*a,*b);


}

int main()
{
    int a=10,b=20;
    int *ptr;
    printf("\nAddress of a=%u\nAddress of b=%u",&a,&b);
    printf("\na=%d, b=%d\n",a,b);
    swapValue(a,b);
    printf("\nafter swap\n");
    printf("\na=%d, b=%d\n",a,b);
    swapRef(&a,&b);
    printf("\nafter swap\n");
    printf("\na=%d, b=%d\n",a,b);
    printf("\n\n");


    return 0;
}