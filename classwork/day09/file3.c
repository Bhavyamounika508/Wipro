#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int ret=0;
    FILE *fptr=NULL;
    fptr=fopen("test2.txt","a");

    if(fptr==NULL)
    {
        printf("\nCheck the file name");
        return 0;
    }
    printf("\nFile Exists \n");
    printf("\nfile pointer is @ %d location\n",ftell(fptr));
    ret=fprintf(fptr,"Bhima");
    if(ret<0)
        printf("\nPlease check the mode of operation\n");

    printf("\nRet value=%d",ret);
    printf("\nfile pointer is @ %d location",ftell(fptr));

    return 0;
}