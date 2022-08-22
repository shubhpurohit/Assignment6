// program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sum+=(i*i);

    }
    printf("sum is:%d",sum);
}
