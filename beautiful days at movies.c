#include<stdio.h>
int main()
{
 int i,j,size,x,ct=0,d,rev=0,rem,y;
 float c,k;
 scanf("%d %d %f",&i,&j,&k);
 size=j-i+1;
 int ar[size];
 for(x=0;x<size;x++)
 {
  rev=0;
  ar[x]=i;
  i++;
  for(y=ar[x];y>0;y=y/10)
  {
   rem=y%10;
   rev=rev*10+rem;
  }
  c=(ar[x]-rev)/k;
  d=(ar[x]-rev)/k;
  if(c==d)
  ct++;
 }
 printf("%d",ct);

}
