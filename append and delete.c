#include<string.h>
#include<stdio.h>
int main()
{
 int n,j=0,c=0,i;
 char str1[100],str2[100];
 scanf("%s %s %d",str1,str2,&n);
 if(strlen(str1)>=strlen(str2))
 {
 for(i=0;str1[i]!='\0';i++)
 {
  if(str1[i]==str2[j])
  {
    c++;
    j++;
  }
 }
 }
 else
 {
  for(i=0;str2[i]!='\0';i++)
  {
   if(str2[i]==str1[j])
   {
    c++;
    j++;
   }
  }
 }
 if((strlen(str1)+strlen(str2)-2*c)<=n&&((strlen(str1)+strlen(str2))%2==n%2||strlen(str1)>=strlen(str2)))
 printf("Yes");
 else
 printf("No");
}
