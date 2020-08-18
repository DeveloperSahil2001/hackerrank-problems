#include<stdio.h>
int main()
{
 int d1,m1,y1,d2,m2,y2;
 scanf("%d %d %d",&d1,&m1,&y1);
 scanf("%d %d %d",&d2,&m2,&y2);
 if(y1<y2)
 printf("0");
 else if(y2==y1)
 {
  if(m1==m2&&d2>=d1)
  printf("0");
  else if(m1==m2&&d1>d2)
  {
    printf("%d",15*(d1-d2));
  }
  else
  {
   if(m1<m2)
   printf("0");
   else
    printf("%d",(m1-m2)*500);
  }
 }
 else
 printf("10000");
}
