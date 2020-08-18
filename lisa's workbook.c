#include<stdio.h>
int main()
{
 int n,k,i,j,p=1,c=0;
 scanf("%d %d",&n,&k);
 int ar[n];
 for(i=0;i<n;i++)
 scanf("%d",&ar[i]);
for(i=0;i<n;i++)
{
 for(j=1;j<=ar[i];j++)
 {
  if(p==j)
   c++;
  if(j%k==0||j==ar[i])
   p++;
 }
}
 printf("%d",c);
}

    
