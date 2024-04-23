/*
Check whether a given number can be expressed as the sum of two prime number.

i/p
Enter a positive integer:
34
Output:
34=3+31
34=5+29
34=11+23
34=17+17

No of ways =4

No of ways=-1

*/


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