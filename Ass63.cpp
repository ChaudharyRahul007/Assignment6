//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a first N odd Natural Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
        sum = sum+i;
    }
    printf("sum of firts %d odd natural naumbers=%d",n,sum);
}