import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class MyException extends Exception
{
 MyException(String s)
 {
  super(s);
 }
}
class validate{
  String username;
  String password;
  validate(String x,String y)
  {
   username=x;
   password=y;
  }
  void check() throws MyException
  {
   if(password.length()<6) throw new MyException("Too short!");
   int i=0,d=0;
   while(i<password.length())
   {
    if(password.charAt(i)>='0'&&password.charAt(i)<='9')
    {
     d=1;
     break;
    }
    i++;
   }
   if(d==0) throw new MyException("No digit!");
   System.out.println("Correct");
  }
}
class Main
{
  public static void main(String[] args)
  {
   Scanner sc=new Scanner(System.in);
   validate obj=new validate(sc.nextLine(),sc.nextLine());
   try
   {
    obj.check();
   }
   catch(MyException e)
   {
    System.out.println(e.getMessage());
   }
  }
}
