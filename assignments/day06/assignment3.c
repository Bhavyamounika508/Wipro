/*
Given an array A of N positive numbers. 
The task is to find the position where equilibrium first occurs in the array.
Equilibrium position in an array is a position 
such that the sum of elements beford it is equal to the sum of elements after it. 

Input Format:
The first line contains an integer,denoting the size of the array.
The second line contains integers denoting the elements of the array.

Constrains : 1<=n<=100
             1<=arr<=1000, where arr is the ith element of the array.
             
Output Format:
The output line contains integer denoting an equlibrium index(if any) or -1(if no equilibrium indexes exist).

Testcase 1: 
Input: 7
[-7,1,5,2,-4,3,0]
3
[-7,0,0,0,-4,4,0]
0
[0 0 0 0 -1]
4

Output: 3

*/



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