#include<stdio.h>
int main()
{
 int n,c=0;
 scanf("%d",&n);
 long int ar[n],gr;
 for(int x=0;x<n;x++)
 {
  scanf("%ld",&ar[x]);
 }
 gr=ar[0];
 for(int y=0;y<n;y++)
 {
 if(ar[y]>gr)
 gr=ar[y];
 }
 for(int k=0;k<n;k++)
 {
 if(gr==ar[k])
 c++;
 }
 printf("%d",c);
}
