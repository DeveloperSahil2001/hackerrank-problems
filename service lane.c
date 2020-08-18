#include<stdio.h>
int main()
{
 int n,t,i,j,min,a,b;
 scanf("%d %d",&n,&t);
 int ar[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&ar[i]);
 }
 for(i=0;i<t;i++)
 {
  min=9999;
  scanf("%d %d",&a,&b);
  for(j=a;j<=b;j++)
  {
   if(ar[j]<min)
    min=ar[j];
  }
  printf("%d\n",min);
 }
}
