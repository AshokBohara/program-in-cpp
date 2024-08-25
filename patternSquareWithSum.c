#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("sum=%d",sum);
}
