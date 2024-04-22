/*
Find a partition point in array

Given an unsorted array of integers. 
Find an element such that all the elements to ist left are smaller and to its right are greater.
Print -1 if no such element exists.

Note that there can be more than one such elements.
For example an array which is sorted in increasing order all elements follow the property.
we need to find only one such element.

Examples:

Input:A[]:{4,3,2,5,8,6,7}
Output: 5

Input:A[]:{5,6,2,8,10,9,8}
Output: -1

*/


#include<stdio.h>
int main()
{
    int i,j,a[20],count,n,x=-1;
    printf("enter length of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(j<i&&a[j]>a[i])
                count++;
            if(j>i&&a[j]<a[i])
                count++;

        }
        if(count==0)
        {
            x=a[i];
            break;
        }
    }
    printf("%d",x);
    return 0;
}