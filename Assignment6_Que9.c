//program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b,max,i,g,lcm;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    g=a*b;
    for(i=max;i<=g;i++)
        {
            if(max%a==0&&max%b==0)
                {lcm=i;
                break;
                }
            else
                max++;
        }

    printf("lcm is %d",lcm);
    return 0;
}
