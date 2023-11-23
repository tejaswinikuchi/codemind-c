#include<stdio.h>
int main()
{
    int a,i,b,n,sum=1;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=n*i;
        printf("%d x %d = %d
",n,i,sum);
    }
}