#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("a is = %d and b is = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a is = %d and b is = %d",a,b);
}