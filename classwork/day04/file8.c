#include<stdio.h>
#include<stdlib.h>

int main()
{
     system("clear");
     int num;
     printf("\nAdress of num =%u\n",&num);
     scanf("%2d",&num);
     printf("\nvalue stored @ %u =%d",&num, num);
     printf("\n\n");
     return 0;
}
