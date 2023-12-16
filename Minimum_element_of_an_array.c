#include<stdio.h>
int main()
{
    int i,n,min;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    min=ar[0];
    for(i=1;i<n;i++)
    {
        if(ar[0]>min);
        {
            min=ar[i];
        }
    }
    printf("%d",min);
}