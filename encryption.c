#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 char* s = (char *)malloc(10240 * sizeof(char)); 
 scanf("%s",s);
 int len = strlen(s);
 int columns = ceil(sqrt(len));
 for(int i = 0; i < columns; i++)
 {
  for(int j = i; j < len; j += columns)
  {
   printf("%c", s[j]);
  }
   printf(" ");
 }
 return 0;
}
