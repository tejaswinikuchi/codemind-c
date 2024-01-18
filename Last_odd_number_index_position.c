#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int last_odd_index=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            last_odd_index=i;
        }
    }
    printf("%d",last_odd_index);
}