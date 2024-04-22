/*
Write the logic to for incrementing squared number-star pattern.

Input Format: Take N as input of type integer.

Output Format: Print incrementing squared number-star pattern.

Constrains: 2<=N<=10

Sample Input: 5

Sample Output: 
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25

*/


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