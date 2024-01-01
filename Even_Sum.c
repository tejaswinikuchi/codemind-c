#include<stdio.h>
int main()
{
    int sum=0,n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
        }
        printf("%d",sum);
}