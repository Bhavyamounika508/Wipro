#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    printf("enter your input\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            temp=temp+1;
            if(j==n)
            {
               printf("%d",temp);
            }
            else
            {
               printf("%d*",temp);
            }
        }
        printf("\n");
    }
    return 0;
}