#include<stdio.h>
#include<math.h>
int main()
{
    int n,res,sum1=0,sum2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    res=abs(sum1-sum2);
    printf("%d",res);
}