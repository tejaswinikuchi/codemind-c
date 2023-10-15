#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((y+2*z)>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}