/*
Problem statement : Given an unsorted array of size N of non-negative integers, 
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer,denoting the size of the array.
The second line contains integers denoting the elements of the array.
The last line contains an integer, denoting the sum.

Constrains: 1<=n<=100
            1<=arr<=1000, where arr is the ith element of the array.
            1<=n<=100000
            
Output Format: The output line contains integers denoting the indexes.

Testcase 1: 
Input: 7
[1,4,0,0,3,10,5]

sum=7
Output: sum found between indexes 1 and 4

Testcase 2:
Input: 2
[1,4]

sum=0
Output: No subarray found.

*/

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