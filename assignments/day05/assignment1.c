/*
Print Series 0,3,8,15,24,35,48,63,80,99 given n=10
*/

#include<stdio.h>
int main()
{
    int n,i,temp=0,j;
    printf("enter your input\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
           printf("%d,",temp);
        }
        else if(i==1)
        {
            j=3;
            temp=3;
            printf("%d,",j);
        }
        else
        {
            j=j+2;
            temp=temp+j;
            printf("%d,",temp);
        }
    }
    return 0;
}