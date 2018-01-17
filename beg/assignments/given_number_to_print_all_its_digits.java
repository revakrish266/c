import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class digits{
     public static void main(String aa[]){
    String str;
    int n;
     Scanner s=new Scanner(System.in);
     n=s.nextInt();
     str=String.valueOf(n);
     char b[]=str.toCharArray();
     for(int i=0;i<b.length;i++){
         System.out.printf("%c\t",b[i]);
     }
}
}