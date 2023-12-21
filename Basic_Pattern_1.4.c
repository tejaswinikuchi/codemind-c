#include<stdio.h>
int main()
{
    int n,i,j,ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(ch='A';ch<'A'+n;ch++)
        {
            printf("%c ",ch);
        }
        printf("
");
    }
}