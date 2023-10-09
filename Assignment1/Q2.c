#include<stdio.h>
int main()
{
    int p=1,n;
    printf("Enter the number factorial you want");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        p=p*i;
    }
    printf("Your factoria is %d",p);
}