#include<stdio.h>
int main()
{
 int t,n,k,c=0;
 scanf("%d",&t);
 for(int x=0;x<t;x++)
 {
  c=0;
  scanf("%d %d",&n,&k);
  int ar[n];
  for(int y=0;y<n;y++)
  {
  scanf("%d",&ar[y]);
  if(ar[y]<=0)
  c++;
  }
 if(c>=k)
 printf("NO\n");
 else
 printf("YES\n");
 }
}
