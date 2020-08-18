#include<stdio.h>
int main()
{
 int b,n,m,i,j,c=0,t=-9999;
 scanf("%d %d %d",&b,&n,&m);
 int ar[n],br[m];
 for(i=0;i<n;i++)
 scanf("%d",&ar[i]);
 for(i=0;i<m;i++)
 {
  scanf("%d",&br[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   if((ar[i]+br[j])<=b&&(ar[i]+br[j])>t)
   {
    t=ar[i]+br[j];
   }
  }
 }
 if(t>-9999)
 printf("%d",t);
 else
 printf("-1");
}
