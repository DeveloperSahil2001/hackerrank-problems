#include<stdio.h>
int main()
{
 long long int n,m,s,t,j,k,r;
 scanf("%lld",&t);
 for(j=0;j<t;j++)
 {
  scanf("%lld %lld %lld",&n,&m,&s);
  r=(m+s-1)%n;
  if(r==0)
  printf("%lld\n",n);
  else
  printf("%lld\n",r);
 }
}
