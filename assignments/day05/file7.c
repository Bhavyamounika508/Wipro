#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter your input\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}