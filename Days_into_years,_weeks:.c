#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x/365;
    int w=(x%365)/7;
    printf("%d
%d",y,w);
}