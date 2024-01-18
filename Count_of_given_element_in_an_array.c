#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b,count=0;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]==b)
        {
            count++;
        }
    }
    printf("%d",count);
}