/*
A3. Write a program to find the n-th number made of prime digits

Input Format:
First line of input contains T number of Test cases
Second line of Input contains an input Number N.

Output Format:
Print the Nth number of sequence and its should be only prime.

Constrains:
1<=T<=100
1<=N<=1000

Examples:
Input:
1
10
Output:
33
*/



#include<stdio.h>
#include<stdbool.h>

bool isprime(int num)
{
    if(num<=1)
       return false;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
           return false;
    }
    return true;
}


bool allDigitsprime(int num)
{
    while(num>0)
    {
        int digit=num%10;
        if(!isprime(digit))
           return false;
        num /= 10;
    }
    return true;
}

int findNthNumber(int n)
{
    int count=0;
    int num=2;
    while(count<n)
    {
        if(allDigitsprime(num))
        {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main()
{
    int test_cases, n;
    printf("Enter the number of test cases: ");
    scanf("%d",&test_cases);

    for(int i=0;i<test_cases;i++)
    {
        printf("Enter N for test case %d: ",i + 1);
        scanf("%d",&n);

        int nth_number = findNthNumber(n);
        printf("output for test case %d: %d\n", i + 1,nth_number);
    }

    return 0;
}