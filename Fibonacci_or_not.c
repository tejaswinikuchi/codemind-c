#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a=0,b=1,c=a+b;
    for(i=1;i<=n-2;i++)
    {
        a=b;
        b=c;
        c=a+b;
        if(n==c)
        break;
    }
    if(n==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}