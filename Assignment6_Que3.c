// program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number of odd\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sum+=((i*2)-1);

    }
    printf("sum is:%d",sum);
}
