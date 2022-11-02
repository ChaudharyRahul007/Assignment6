//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a first n even natural no:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
        sum = sum+i;
    }
    printf("Sum of first n even natural number=%d:",sum);
    return 0;
}