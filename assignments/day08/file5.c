#include<stdio.h>
#include<string.h>
int main()
{
    int n=1,j,l,m,k=0,max;
    char str1[50],str2[50],str3[100];
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
        if(str1[j]!='\0');
        {
            str3[k]=str1[j];
            k++;
        }
        if(str2[j]!='\0');
        {
            str3[k]=str2[j];
            k++;
        }
    }
    str3[k]='\0';
   printf("%s",str3);
   return 0;
}