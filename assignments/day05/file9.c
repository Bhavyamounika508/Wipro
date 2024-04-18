#include<stdio.h>
int main()
{
    int ch=65,i,j,k,l,n;
    printf("enter your input\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
           printf(" ");
        for(k=1;k<=i;k++)
           printf("%c",ch++);
        ch--;
        for(l=1;l<i;l++)
            printf("%c",--ch);
        printf("\n");
        ch=65;
    }
    return 0;
}