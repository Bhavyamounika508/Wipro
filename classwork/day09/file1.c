#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void display();

int add(int, int);
char *Name();

int main()
{
    void (*fptr)();
    char *empName=NULL;
    fptr=display;
    (*fptr)();

    empName=Name();

    puts(empName);
    printf("\naddition result: %d\n",add(43,23));

    (*fptr)();
    fptr=add;
    (*fptr)(101,31);
    printf("\n\n");
    return 0;
}

void display()
{
    printf("\n==================");
    printf("\n     Welcome    \n");
    printf("\n==================");
}

int add(int x, int y)
{
    printf("\n(withon func)addition result: %d\n",x+y);
    return (x+y);
}

char *Name()
{
    char *name=(char *)malloc(1000);
    printf("\nenter the Name of the person: ");
    scanf("%s",name);

    return name;
}