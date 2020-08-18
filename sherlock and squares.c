#include<math.h>
#include<stdio.h>
int main()
{
 long int t,i=1,x,a,b,c;
 scanf("%ld",&t);
 for(x=0;x<t;x++)
 {
  c=0;
  i=0;
  scanf("%ld %ld",&a,&b);
  while(i*i<a)
  i++;
  while(i*i<=b)
  {
    c++;
    i++;
  }
  printf("%ld\n",c);
 } 
}
