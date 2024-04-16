#include<stdio.h>
int main()
{
    int i=1,j=10;
    
    while(i<=5)
    {
        printf("\ni=%d",i);
        j=10;
        while(j<=50)
        {
            printf("\nj=%d",j);
            j=j+10;
        }

        i++;
    }
    printf("\nprogram end\n");
    return 0;
}