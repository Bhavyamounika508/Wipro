#include <stdio.h>
int main()
{
    char Name[20];
    fgets(Name,sizeof(Name)-1,stdin);
    // printf("\nName: %s", Name);
    puts(Name);
    printf("\n\n");
    return 0;
}