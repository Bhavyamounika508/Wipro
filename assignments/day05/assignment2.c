/*
Print Series 1,2,4,8,16,32,64. given n=8
*/


#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter your input\n");
    scanf("%d",&n);
    printf("%d,",i);
    while(i+i<=n)
    {
        printf("%d,", i+i);
        i=i+i;
    }
    return 0;
}