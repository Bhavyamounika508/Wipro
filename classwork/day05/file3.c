#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    system("clear");
    printf("\nenter a value between(1-5): ");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n1 is pressed");
    }
    else if(ch==2)
    {
        printf("\n2 is pressed");
    }
    else if(ch==3)
    {
        printf("\n3 is pressed");
    }
    else if(ch==4)
    {
        printf("\n4 is pressed");
    }
    else if(ch==5)
    {
        printf("\n5 is pressed");
    }
    else
    
        printf("\nenter the values between 1-5 only");
    
    printf("\nprogram ended\n\n");

    return 0;
}