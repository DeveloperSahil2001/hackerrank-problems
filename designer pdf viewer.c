#include<stdio.h>
int main()
{
 int ar[26],i=0,c=0,max=-99999;
 char str[100];
 for(i=0;i<26;i++)
 scanf("%d",&ar[i]);
 scanf("%s",str);
 i=0;
  while(str[i] != '\0') 
    {
        c = ar[(int)str[i]-97];
        max = (c > max)?c:max;
        i++;
    }
    printf("%d",max*i);
}
