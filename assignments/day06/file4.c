#include<stdio.h>
int main()
{
    int i,j,a[20],count,n,x=-1;
    printf("enter length of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(j<i&&a[j]>a[i])
                count++;
            if(j>i&&a[j]<a[i])
                count++;

        }
        if(count==0)
        {
            x=a[i];
            break;
        }
    }
    printf("%d",x);
    return 0;
}