#include<stdio.h>
int main()
{
 int t,a,i,j,ar[60],c=1;
 scanf("%d",&t);
 for(i=0;i<60;i++)
 {
  ar[i]=c;
  for(j=0;j<i;j++)
  {
   if(j%2==0)
   ar[i]=ar[i]*2;
   else
   ar[i]++;
  }
 }
 for(i=0;i<t;i++)
 {
  scanf("%d",&a);
  printf("%d\n",ar[a]);
 }

}
