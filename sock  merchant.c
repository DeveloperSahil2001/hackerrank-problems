#include<stdio.h>
int main()
{
 int n,i,j,a=0,t=0,s=0;
 scanf("%d",&n);
 int ar[n],arr[100];
 for(i=0;i<n;i++)
 {
  scanf("%d",&ar[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(ar[i]==ar[j])
   break;
  }
  if(i==j)
  {
   arr[a]=ar[i];
   a++;
  }
 }

for(i=0;i<a;i++)
{
 t=0;
 for(j=0;j<n;j++)
 {
  if(arr[i]==ar[j])
  {
    t++;
  }
 }
 s=s+t/2;
}
printf("%d",s);
}
