
class Solution
{
    public String nextPalin(String s) 
    { 
     int d=-1;
     int n=s.length();
     int ar[]=new int [n];
     for(int i=0;i<n;i++){
      ar[i]=(int)s.charAt(i);
     }
     Arrays.sort(ar);
     String str="";
     for(int i=n-1;i>0;){
      if(ar[i]==ar[i-1])
      {
       str+=(char)ar[i];
       i=i-2;
      }
      else if(ar[i]!=ar[i-1]){
       d=i;
       i--;
      }
     }
     String rev="";
     for(int i=n/2-1;i>=0;i--){
      rev+=str.charAt(i);
     }
     if(d!=-1)
     str+=(char)ar[d];
     str+=rev;
     if(s.equals(str)){
      return "-1";
     }
     return str;
    }
}
