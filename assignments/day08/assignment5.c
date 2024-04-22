/*

Alternativel merge two strings

i/p
Bhima
ABCDEOLM

O/P
BAhBiCmDaEOLM

*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n=1,j=0,l,m,k=0,max;
    char str1[50],str2[50];
    printf("enter two strings\n");
    scanf("%s%s",&str1,&str2);
    l=strlen(str1);
    m=strlen(str2);
    if(m>l)
      max=m;
    else
      max=l;
    while(j<max)
    {
        if(str1[j]!='\0')
          printf("%c",str1[j]);
        if(str2[j]!='\0')
          printf("%c",str2[j]);
        j++;
    }
    return 0;
}