

import java.util.*;

import java.lang.*;

import java.io.*;


class Codechef

{

	public static void main (String[] args) throws java.lang.Exception
	
{

String str;

int count=0;

Scanner scan= new Scanner(System.in);

str=scan.nextLine();

for(int i=0;i<str.length();i++)

{
 
   if(str.charAt(i)>='0'&&str.charAt(i)<='9')

    {

        count++;
  
  }

}

System.out.println(count);

		
	}

}
