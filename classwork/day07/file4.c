#include<stdio.h>

void display(char *);

int main()
{
    char wcStr[] = "\nWelcome to C programming class\n";
    char endStr[] = "\nEnd of program\n";
    display(wcStr);
    printf("\nThis is main function\n");
    display(endStr);
    printf("\n\n");
    return 0;
}

void display(char *str1)
{
    int i;
    putchar('\n');
    for(i=0;i<30;i++)
       putchar('=');
    printf("%s",str1);

    for(i=0;i<30;i++)
       putchar('=');
    printf("\n\n");
}