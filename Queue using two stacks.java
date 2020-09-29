import java.io.*;
import java.util.*;
 class Node{
  int data;
  Node next;
  Node(int data)
  {
   this.data=data;
   this.next=null;
  }
 }

class QueueUsingLL{
 Node start;
 Node end;
 QueueUsingLL(){
  start=null;
  end=null;
 }
 void enqueue(int data)
 {
  Node node=new Node(data);
  if(start==null)
  {
   start=end=node;
   return;
  }
  end.next=node;
  end=end.next;
 }

 int peek()
 {
  if(start!=null)
   return start.data;
   return -1;
 }

 int dequeue()
 {
  Node temp=start;
  start=start.next;
  return temp.data;
 }
}
public class Solution {

    public static void main(String[] args) {
     Scanner sc=new Scanner(System.in);
     int n,i,x;
     n=sc.nextInt();
     QueueUsingLL q=new QueueUsingLL();
     for(i=0;i<n;i++)
     {
      x=sc.nextInt();
      switch(x)
      {
        case 1:
        q.enqueue(sc.nextInt());
        break;

        case 2:
        q.dequeue();
        break;

        case 3:
        System.out.println(q.peek());
        break;
      }
     }
    }
}
