#include<stdio.h>
int main()
{
 int n,d,m,c=0,s=0,j;
 scanf("%d",&n);
 int ar[n];
 for(int i=0;i<n;i++)
 scanf("%d",&ar[i]);
 scanf("%d %d",&d,&m);
 for(int i=0;i<n-m+1;i++)
 {
  s=0;
 for(j=0;j<m;j++)
 {
 s=s+ar[i+j];
 }
 if(s==d)
 c++;
 }
 printf("%d",c);
}
