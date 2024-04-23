#include<stdio.h>
int main()
{
    int val1=20, val2=20;
    int res=(val1==10);

    printf("\nResult of equality operator=%d",(10.25==(10.5-0.25)));
    printf("\nResult of equality operator=%d",res);
    printf("\nResult of less than operator=%d",(val1<val2));
    printf("\nResult of less than or equal to operator=%d",(val1>=val2));
    printf("\nResult of greater than or equal to operator=%d",(val1>=val2));
    printf("\nlogical and (&&) operation =%d",(100>20)&&(val1==val2));
    printf("\n\n");
    return 0;
}