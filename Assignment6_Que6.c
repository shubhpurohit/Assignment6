//a program to calculate factorial of a number


main()
{
    int i,n,fac=1;
    printf("enter an number to find its factorial: ");
    scanf("%d",&n);
   if(n<0)
   {
       printf("Factorial not possible");
   }
   else{
    for(i=n;i>0;i--)
    {
        fac*=i;

    }
printf("\n factorial is:%d",fac);
   }
}
