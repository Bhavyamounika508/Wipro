#include<stdio.h>
int func1(int);
int main()
{
    int z=10,retvalue=0;
    long double ld;
    printf("\n%d %d\n\n", sizeof(z),sizeof(ld));
    retvalue = func1(++z);
    printf("\nretvalue=%d\tz=%d",retvalue,z);
    retvalue = sizeof(++z);
    printf("\nretvalue =%d\tz=%d",retvalue,z);
    printf("\n\n");
    return 0;
}

int func1(int x)
{
    return x;
}