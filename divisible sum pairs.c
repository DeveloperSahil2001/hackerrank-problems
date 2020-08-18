#include<stdio.h>
int main()
{
int c=0,n,t;
scanf("%d %d",&n,&t);
int ar[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
for(int x=0;x<n;x++)
{
 for(int y=0;y<n;y++)
 {
  if(x!=y)
  {
  if((ar[x]+ar[y])%t==0)
  c++;
  }
 }
}
printf("%d",c/2);
}
