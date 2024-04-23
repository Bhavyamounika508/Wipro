#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char *outStr=NULL;

    char str1[]="Bhavyamounika";
    char str2[]="Paruchuri";

    outStr = (char *)malloc(strlen(str1)+strlen(str2)+2);
    strcat(strcat(strcpy(outStr, str1)," "),str2);
    
    printf("\nStr1: %s\nStr2: %s\n",str1,str2);
    printf("\nOutString: %s",outStr);
    printf("\n\n");

    free(outStr);
    return 0;

}