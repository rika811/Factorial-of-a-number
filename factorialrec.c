#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int main()
{
int f, a;
printf("Enter a non negative integer:\t");
scanf("%d",&a);
f=fact(a);
printf("The factorial=\t%d",f);
}