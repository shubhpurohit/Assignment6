// program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number of even number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sum+=(i*2);

    }
    printf("sum is:%d",sum);
}
