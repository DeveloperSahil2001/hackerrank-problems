import java.util.*;

// Other imports go here
// Do NOT change the class name
class Main
{
  static void showq(Queue<Integer> q)
  {
    while(q.peek() != null)
    {
      System.out.print(" " + q.remove());
    }
  }
  static void flipHalfQueue(Queue<Integer> q)
{
 Stack<Integer> st=new Stack<Integer>();
  st.push(1);//to prevent empty stack exception 
 int size=q.size(),i,x;
 for(i=0;i<size;i++)
 {
  x=q.poll();
  if(i%2==1)
  {
   st.push(x);
  }
  else
  q.add(x);
 }
 size=q.size();
 for(i=0;i<size;i++)
 {
  x=q.poll();
  q.add(x);
  x=st.pop();
  q.add(x);
 }
}
public static void main(String[] args)
{
  Queue <Integer> q = new LinkedList<Integer>();
  Scanner s=new Scanner(System.in);
  int n,t;
  t=s.nextInt();
  while(t>0)
  {
    n=s.nextInt();
    q.add(n);
    t=t-1;
  }
  flipHalfQueue(q);
  showq(q);
}
}
