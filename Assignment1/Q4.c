#include<stdio.h>
int lcm(int,int);
int main()
{
    int n1,n2,b,l;
    printf("Enter the value of n1 and n2 :");
    scanf("%d%d",&n1,&n2);
    b=lcm(n1,n2);
    l=n1*n2/b;
    printf("LCM is %d",l);
}
int lcm(int n1,int n2)
{
    int gcd;
    for (int i = 1; i<=n1 && i<=n2; i++)
    {
       if (n1%i==0 && n2%i==0)
       {
        gcd=i;
       }
       
    }
    return gcd;
}