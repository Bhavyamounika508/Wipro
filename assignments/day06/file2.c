#include<stdio.h>
int main()
{
    int n,i,j,sum,a[20],x,y,count=0;
    printf("enter array length\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); 
        printf("enter the sum value\n");
        scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                x=i;
                y=j;
                count=1;
                break;
            }
        }
    }
    if(count==1)
        printf("sum found between indexes %d and %d",x,y);
    else
        printf("no sub array found");
    return 0;
}