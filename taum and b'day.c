#include<stdio.h>
int main()
{
 long int t,i,b,w,bc,wc,z,s,c,gifts;
 scanf("%ld",&t);
 for(i=0;i<t;i++)
 {
  scanf("%ld %ld",&b,&w);
  scanf("%ld %ld %ld",&bc,&wc,&z);
  s=b*bc+w*wc;
  gifts=b+w;
  if(bc<wc)
  c=gifts*bc+w*z;
  if(bc>wc)
  c=gifts*wc+b*z;
  if(c<s)
  printf("%ld\n",c);
  else
  printf("%ld\n",s);

 }
}
