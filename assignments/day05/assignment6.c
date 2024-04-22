/*
Language : C
Module : Base module
Topic: Star pattern
Level: Easy
Problem statement : Write the logic to print right triangle star pattern.

Input Format : First line contains N of type integer.

Output Format : Print the right traingle star pattern.

Constrains: 2<=N<=10

Sample input: 5

Sample output: 
*
**
***
****
*****
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
    return 0;
}