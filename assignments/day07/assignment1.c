/*

Sort the array element in ascending order using ptr

*/

#include <stdio.h>

void sort(int n, int* ptr)
{
    int i,j,t;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)< *(ptr+i))
            {
                t= *(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    for(i=0;i<n;i++)
       printf("%d ", *(ptr+i));
}

int main()
{
    int n=5;
    int arr[]={3,34,23,54,10};

    sort(n,arr);

    return 0;
}