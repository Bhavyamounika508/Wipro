#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,temp1,j=10,f,k;
    printf("enter your input\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       f=1;
       for(k=1;k<=i;k++)
       {
        f=f*10;
       }
       temp1=(f-1)/3;
       sum=sum+temp1;
    }
    printf("the sum of the series is:%d",sum);
    return 0;
}