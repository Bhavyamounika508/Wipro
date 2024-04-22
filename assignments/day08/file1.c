#include<stdio.h>
int main()
{
    int n,i,j,count,r=-1,nw=0;
    printf("Enter your input\n");
    scanf("%d",&n);
    for(i=2;i<(n/2+1);i++)
    {
        count=0;
       for(j=2;j<i;j++)
       {
           if(i%j==0)
            count++;
       }
       if(count>0)
        continue;
       else
       {
        for(j=2;j<(n-i);j++)
        {
            if((n-i)%j==0)
              count++;
        }
       
       }
       if(count==0)
        nw++;
    }
    if(nw==0)
      printf("no of ways:%d",r);
    else
      printf("no of ways:%d",nw);
    return 0;        
}