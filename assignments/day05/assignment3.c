/*
Print sum of even and sum of odd values between 1 to 50
*/

#include<stdio.h>
int main()
{
    int i,SE=0,SO=0,n;
    printf("enter your range\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            SE=SE+i;
        }
        else
        {
            SO=SO+i;
        }
    }
    printf("sum of even numbers are:%d\n",SE);
    printf("sum of odd numbers are:%d\n",SO);
    return 0;
}