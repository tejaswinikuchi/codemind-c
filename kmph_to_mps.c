#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    float y=(x*1000.0)/3600.0;
    printf("%.2f",y);
}