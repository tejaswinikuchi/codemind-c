#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i||j==n-i+1)
            {
                printf("%c",i+64);
            }
            else printf(" ");
        }
            printf("
");
        }
    }