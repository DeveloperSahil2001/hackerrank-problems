#include<stdio.h>
int main()
{
    long int n,r,c=0,t,i;
    scanf("%ld",&t);
 for(i=0;i<t;i++)
 {
    scanf("%ld",&n);
    r=n;
    c=0;
    while(r>0)
    {
     if(r%10!=0&&n%(r%10)==0)
     c++;
     r=r/10;
    }
    printf("%ld\n",c);
 }
}
