/*
Language: c
Module:Base module
Topic : star pattern
Level : Easy
Problem statement: Write the logic to print star patter or rectangle star pattern

Input Format: First line contains N of type integer.

Output Format: Print the rectangle star pattern

Constraints: 2<=N<=10

Sample input: 5

Sample output:
*****
*****
*****
*****
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
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}