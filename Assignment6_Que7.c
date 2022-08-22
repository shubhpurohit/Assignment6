//a program to count digits in a given number
#include<stdio.h>
int main()
{
    int i,n,div,count=1;
    printf("Enter a number to count its digits\n");
    scanf("%d",&n);
    while((n/10)!=0)
    {
        count++;
        n=n/10;
    }
    printf("the number of %d digit.",count);
    return 0;

}
