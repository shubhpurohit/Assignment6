#include<stdio.h>

int main()
{
    int n,x=0,temp=0;
    printf("Enter the number to reverse it\n");
    scanf("%d",&n);
    while(1)
    {
        if(n==0)
            break;
        else
        {
            temp=n%10;
            x=(x*10)+temp;
            n=n/10;

        }
    }
    printf("Reversed number is: %d",x);
    return 0;

}
