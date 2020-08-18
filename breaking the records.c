#include<stdio.h>
int main()
{
int n,a=0,b=0;
scanf("%d",&n);
long int ar[n],gr,sm;
for(int x=0;x<n;x++)
scanf("%ld",&ar[x]);
sm=ar[0];
gr=ar[0];
for(int y=1;y<n;y++)
{
 if(ar[y]>gr)
 {a++;
 gr=ar[y];}
 if(ar[y]<sm)
 {
  b++;
  sm=ar[y];
 }
}
printf("%d %d",a,b);
}
