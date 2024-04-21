#include<stdio.h>

int main()
{
    char Name[] = "bhavya mounika";
    char Name1[20];
    int i;
    for(i=0;i<20;i++)
        printf("\nName[%d] = %c its Ascii value=%d",i,Name[i],Name[i]);
    
    printf("\n%s",Name);
    scanf("%[^\n]s",Name1);
    printf("\n");
    puts(Name1);
    printf("\n\n");
    return 0;
}