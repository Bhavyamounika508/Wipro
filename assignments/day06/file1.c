#include<stdio.h>

void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotateEveryKth(int arr[], int x, int y)
{
    for(int i=0; i<x; i+=y)
    {
        int start =i;
        int end =i+y-1;
        if(end>=x)
        {
            end = x-1;
        }
        reverse(arr,start,end);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x=sizeof(arr)/sizeof(arr[0]);
    int y=3;//Rotate of every 3rd element

    printf("original array: ");
    for(int i=0;i<x;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateEveryKth(arr, x, y);

    printf("Array after rotating every %dth element: ", y);
    for(int i=0;i<x;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}