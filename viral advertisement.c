#include<stdio.h>
int main()
{
 int n,s,i,l=5/2,t=0;
 scanf("%d",&n);
 int ar[n];
 for(i=0;i<n;i++)
 {
  ar[i]=l;
  s=ar[i]*3;
  l=s/2;
  t=t+ar[i];
 }
 printf("%d",t);
}
