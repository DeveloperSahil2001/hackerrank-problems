#include<stdio.h>
int main()
{
 int n,i,j,a=0,c=0,max;
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
 int arrr[a];
 for(i=0;i<a;i++)
 {
  c=0;
  for(j=0;j<n;j++)
  {
    if(arr[i]==ar[j])
     c++;
  }
  arrr[i]=c;
 }
 max=0;
 for(i=0;i<a;i++)
 {
  if(arrr[i]>max)
  max=arrr[i];
 }
 printf("%d",n-max);

}
