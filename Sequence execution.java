import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

      public static void main(String[] args){
          Scanner in=new Scanner(System.in);
    ArrayList<Integer> list = new ArrayList<Integer>();
        int n = in.nextInt();
        for(int i = 0; i < n; i++)
            list.add(in.nextInt());
        for(int i = 1; i <= n; i++)
           System.out.println(list.indexOf(list.indexOf(i)+1)+1);
    }

}
