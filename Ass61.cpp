//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a first n natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum of first n natural numbers= %d",sum);
    return 0;
}