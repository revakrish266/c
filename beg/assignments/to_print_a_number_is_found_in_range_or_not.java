/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
	    Scanner scan=new Scanner(System.in);
	    int count=0,n,i;
	    n=scan.nextInt();
	    for(i=1;i<=10;i++)
	    {
	        if(i==n)
	        {
	            count=1;
	        }
	    }
	    if(count==1)
	    {
	        System.out.println("YES");
	    }
	    else{
	        System.out.println("NO");
	    }
	    
	}
}
