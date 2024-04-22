/*

Write a simple calculator program using functions

*/#include<stdio.h>
int main()
{
    int x,y,choice;
    printf("enter two integers:");
    scanf("%d %d", &x,&y);
    scanf("Enter choice: 1.addition 2.subtraction 3.multiplication 4.division");
    scanf("%d", &choice);

    if(choice==1)
       printf("Result:%d",x+y);
    else if(choice==2)
       printf("Result:%d",x-y);
    else if(choice==3)
       printf("Result:%d",x*y);
    else if(choice==4)
    {
        if(y!=0)
           printf("Result: %.2f",(float)x/y);
        else
           printf("Error!division on by zero not posibble.");
    }
    else
       printf("Error! invalid choice.");
       return 0;
}