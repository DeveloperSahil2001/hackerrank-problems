#include<stdio.h>
int main()
{
    int n,k,b,t=0;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        t=t+ar[i];
    }
    scanf("%d",&b);
    if((t-ar[k])/2==b)
    printf("Bon Appetit");
    else
    printf("%d",b-(t-ar[k])/2);
}
