#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int x=1;x<=n;x++)
 {
  for(int y=n;y>0;y--)
  {
    if(y>x)
    printf(" ");
    else printf("#");
  }
  printf("\n");
 }
}
