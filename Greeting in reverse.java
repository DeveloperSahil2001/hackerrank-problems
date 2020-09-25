import java.util.Scanner;
class ReverseGreet extends Thread implements Runnable
{
 int n;
 ReverseGreet(int n)
 {
  this.n=n;
 }
 public void run()
 {
 int i;
 for(i=n;i>0;i--)
 {
  System.out.print("CodeQuotient Thread");
  System.out.println(i);
 }
 }
}
class Main{
 public static void main(String[] args)
 {
  Scanner sc=new Scanner(System.in); 
  ReverseGreet t=new ReverseGreet(sc.nextInt());
  t.start();
 }
}
