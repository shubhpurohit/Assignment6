//a program to check whether a given number is a Prime number or not.
#include<stdio.h>
int main()
{
    int n,yes=1;
    printf("Enter an number to check if its prime or not.\n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if((n%i)==0)
        {
            yes=0;

        }
    }

    if(yes==1)
        printf("the number is prime");

    else
        printf("the number is not prime");

    return 0;
}
