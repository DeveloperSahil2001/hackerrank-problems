#include<stdio.h>
int main()
{
 int n,k,i=0,e=100,d=0,j=0;
 scanf("%d %d",&n,&k);
 int c[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&c[i]);
 }
do {

    i = (i + k) % n;
    e -= c[i] * 2 + 1;
    
} while (i != 0);

printf("%d",e);
}
