#include<stdio.h>
int main()
{
    int a[20];
    int i,counte,counto;
    for(i=1,counto=0,counte=(sizeof(a)/sizeof(a[0]))/2;i<=20;i++)
    {
        if(i%2!=0)
        {
            a[counto]=i;
            counto++;
        }
        else
        {
            a[counte]=i;
            counte++;
        }
    }
    for(i=0;i<20;i++)
        printf("\na[%d]=%d",i,a[i]);
    printf("\nprogram end\n");
    return 0;
}