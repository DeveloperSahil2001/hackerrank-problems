#include<stdio.h>
int main()
{
 int n,h,s=0,a;
 scanf("%d %d",&n,&h);
 a=h;
 int ar[n];
 for(int i=0;i<n;i++)
 {
    scanf("%d",&ar[i]);
 }
 for(int i=0;i<n;i++)
 {
    if(ar[i]>h)
    {
     s=s+ar[i]-h;
     h=ar[i];
    }
 }
 printf("%d",s);
}
