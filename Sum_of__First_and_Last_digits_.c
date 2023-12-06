#include<stdio.h>
int main()
{
    int i,n,fd,ld;
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    int sum=fd+ld;
    printf("%d",sum);
    
}