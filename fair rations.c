#include<stdio.h>
int main()
{
    int i,c=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     if(a[i]%2!=0)
     c++;
    }
    if(c%2!=0)
    printf("NO");
    else
    {
     c=0;
    for(i=0;i<n;i++)
    {
     if(a[i]%2!=0&&a[i-1]%2==0)
     {
      a[i]++;
      a[i+1]++;
      c=c+2;
     }
    }
    printf("%d",c);
    }
}
