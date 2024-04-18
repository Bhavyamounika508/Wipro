#include<stdio.h>
int main()
{
    int i,j,a[20],n,x=-1,ls,rs;
    printf("enter length of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ls=0;rs=0;
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                ls=ls+a[i];
            }
            if(j>i)
            {
                rs=rs+a[i];
            }
        }
        if(ls==rs)
        {
            x=i;
            break;
        }
    }
    printf("%d",x);
    return 0;
}