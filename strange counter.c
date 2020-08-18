#include<stdio.h>
int main()
{
 long long int n,t=3,c=0;
 scanf("%lld",&n);
 while(n>t)
 {
  n=n-t;
  t=t*2;
 }
 printf("%lld",t-n+1);
}
 
