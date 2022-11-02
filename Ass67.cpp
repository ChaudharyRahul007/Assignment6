//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,cout;
    printf("Enter Numbers to count digits:");
    scanf("%d",&n);
    for(cout=1;cout<=n;cout++)
    {
        n=n/10;
    }
    printf("Number of Digits is= %d",cout);
    return 0;
}