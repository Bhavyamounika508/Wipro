#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, *temp;
    printf("\nAddress of ptr = %u\n",&ptr);
    ptr = (int *)malloc(3*sizeof(int));
    temp = ptr;
    printf("\nPointing Address of ptr = %u\n",ptr);

    *ptr = 101;
    printf("\n%d",*ptr);
    ptr++;
    *ptr = 102;
    printf("\n%d",*ptr);
    
    ptr++;
    *ptr = 103;
    printf("\n%d",*ptr);

    ptr = temp;
    printf("\n%d",*ptr);

    printf("\n\n");
    return 0;
}