#include<stdio.h>
int main()
{
    int i,a,b,sum=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        sum=i*a;
        printf("%d x %d = %d
",a,i,sum);
    }
}