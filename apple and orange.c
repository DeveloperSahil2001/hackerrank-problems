#include<stdio.h>
int main()
{
 long long int s,t,a,b,m,o,i,c=0;
 scanf("%lld %lld",&s,&t);
 scanf("%lld %lld",&a,&b);
 scanf("%lld %lld",&m,&o);
 long long int ar[m],br[o];
 for(i=0;i<m;i++)
 {
  scanf("%lld",&ar[i]);
 }
 for(i=0;i<o;i++)
 {
  scanf("%lld",&br[i]);
 }
 for(i=0;i<m;i++)
 {
  if(ar[i]+a>=s&&ar[i]+a<=t)
  c++;
 }
 printf("%lld\n",c);
 c=0;
 for(i=0;i<o;i++)
 {
  if(br[i]+b>=s&&br[i]+b<=t)
  c++;
 }
 printf("%lld",c);
}


