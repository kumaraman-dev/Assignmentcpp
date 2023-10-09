#include<stdio.h>
int prime(int);
int main()
{
    int n,b;
    printf("Enter the number");
    scanf("%d",&n);
    b=prime(n);
    if (b==1)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
    
}
int prime(int n)
{
    int flag=0;
    for (int i = 2; i<=n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
        
    }
    return flag;
}