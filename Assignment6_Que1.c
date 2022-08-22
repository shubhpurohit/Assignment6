//a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number till you want to find the sum\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum is:%d",sum);
}
