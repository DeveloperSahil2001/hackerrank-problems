#include<stdio.h>
int main()
{
 int n,c=0,t=0;
 scanf("%d",&n);
 char ch[n];
 scanf("%s",ch);
 for(int i=0;ch[i]!='\0';i++)
 {
  if(ch[i]=='U')
  {
   if(++t==0)
    c++;
  }
  else
   t--;
 }
 printf("%d",c);
}
