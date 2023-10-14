#include<stdio.h>
int main()
{
    int T,S,B;
    scanf("%d%d%d",&T,&S,&B);
    int c=2*T*S*B*512;
    int p=(c/1024);
    printf("%d KB",p);
}