#include<stdio.h>
int main()
{
    int a,b;
    char ch='1';
    char name[20];
    while(ch){
        printf("\n%c=%d\n",ch,ch);
        printf("\nDo you want to continue(1/0):");
        getchar();
        scanf("%c",&ch);
    }
    scanf("%d%d%s",&a,&b,&name[0]);
    printf("\nch : %d=%c", ch,ch);
    // getchar();
    
    printf("\nvalues scanned\n");
    printf("\n%d\t%d\t%s\t%c",a,b,name,ch);
    printf("\nch : %d=%c",ch,ch);
    printf("\n\n");
    return 0;
}