//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number to check prime or not:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}
