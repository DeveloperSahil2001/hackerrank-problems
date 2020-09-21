import java.util.Scanner;
import java.util.*;

class Main{
  static int balancedString(String s){
    Stack<Character> st=new Stack<Character>();
    st.push('@');
    int i;
    for(i=0;i<s.length();i++)
    {
     if(s.charAt(i)=='{'||s.charAt(i)=='['||s.charAt(i)=='(')
     {
      st.push(s.charAt(i));
     }
     else
     {
      if(s.charAt(i)==')'&&st.peek()=='(')
      {
        st.pop();
      }
      else if(s.charAt(i)==')'&&st.peek()!='(')
      {
        return i;
      }
      else if(s.charAt(i)==']'&&st.peek()=='[')
      {
        st.pop();
      }
      else if(s.charAt(i)==']'&&st.peek()!='[')
      {
        return i;
      }
      else if(s.charAt(i)=='}'&&st.peek()=='{')
      {
        st.pop();
      }
      else if(s.charAt(i)=='}'&&st.peek()!='{')
      {
        return i;
      }
     }
    }
    if(st.pop()=='@')
    return -1;
    else 
    return
 }

  public static void main(String[] args){
    String s1;
    Scanner s=new Scanner(System.in);
    s1=s.nextLine();
    System.out.println(balancedString(s1));
  }
}
