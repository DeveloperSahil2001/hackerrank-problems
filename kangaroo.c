#include<stdio.h>
int main()
{
 int x1,v1,x2,v2,c=0;
 scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
 while(x2>x1&&v1>v2&&x1!=x2)
 {
  x1=x1+v1;
  x2=x2+v2;
  if(x1==x2)
  c++;
 }
 if(c==0)
 printf("NO");
 else
 printf("YES");
}
