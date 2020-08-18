#include<stdio.h>
int main()
{
 int n,p,c,l;
 scanf("%d %d",&n,&p);
 c=p/2;
 l=n/2-p/2;
 if(c<l)
 printf("%d",c);
 else
 printf("%d",l);
}
