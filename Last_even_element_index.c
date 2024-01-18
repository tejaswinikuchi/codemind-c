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
    int last_even_index=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            last_even_index=i;
        }
    }
    printf("%d",last_even_index);
}