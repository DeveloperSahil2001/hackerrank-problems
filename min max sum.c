#include<stdio.h>
int main()
{
 long int ar[5],s=0,gr,sm;
 for(int x=0;x<5;x++)
 {
  scanf("%d",&ar[x]);
  s=s+ar[x];
 }
 gr=ar[0];
 sm=ar[0];
 for(int y=0;y<5;y++)
 {
  if(ar[y]>gr)
  gr=ar[y];
  if(ar[y]<sm)
  sm=ar[y];
 }
printf("%ld %ld",s-gr,s-sm);
}
