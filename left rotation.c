#include<stdio.h>
int main()
{
 long int n,k,i,j,t;
 scanf("%ld %ld",&n,&k);
 long int ar[n],ar2[n];
 for(i=0;i<n;i++)
 {
  scanf("%ld",&ar[i]);
 }
 for(i=0;i<n;i++)
 {
  ar2[(i + n - k) % n] = ar[i];
 }
 for(i=0;i<n;i++)
 {
  printf("%ld ",ar2[i]);
 }
}
