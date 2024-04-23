/*
Write the logic to print right triangle star pattern.

Input Format: First line contains N of type integer.

Output Format: Print the right triangle star pattern.

Constrains: 2<=N<=10

Sample Input: 5

Sample Output: 
*
**
***
****
*****
****
***
**
*

*/



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