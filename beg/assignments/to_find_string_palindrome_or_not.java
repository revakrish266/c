import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) 
	{
	int i,len,j;
	String st="";
	Scanner s=new Scanner(System.in);
	String str=s.nextLine();
	len=str.length();
	for(i=len-1;i>=0;i--)
	{
		st=st+str.charAt(i);
	}
	if(str.equals(st))
	{
		System.out.println("yes");
	}
	else
	{
		System.out.println("no");
	}
	
		}
}
