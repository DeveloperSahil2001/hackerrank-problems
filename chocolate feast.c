#include<stdio.h>
int main()
{
 int t,i,n,c,m,choco=0,wrap,s;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
  choco=0;
  scanf("%d %d %d",&n,&c,&m);
  wrap=n/c;
  choco=wrap;
  while(wrap>=m) 
 {
  choco=choco+wrap/m;
  s=wrap%m;
  wrap=s+wrap/m;
 }
  printf("%d\n",choco);
 }
}
