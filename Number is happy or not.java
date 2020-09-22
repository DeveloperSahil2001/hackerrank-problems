import java.util.Scanner;
// Other imports go here
// Do NOT change the class name and method signature
class Main
{ 
  static boolean isHappy(int n) 
  {
   int s,i,rem;
   while(n/10!=0)
   {
    s=0;
    for(i=n;i>0;i=i/10)
    {
     rem=i%10;
     s+=(int)Math.pow(rem,2);
    }
    n=s;
   }
   if(n==1)
     return true;
   else
     return false;
  }
