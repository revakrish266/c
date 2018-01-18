package java_;

public class sentence_case {
	
	public static String output1;
	
	public static void usermain(String input)
	
	{
		int array_size=0,i=0;
		char first_char;
		String temp="";
		String[] array=input.split(" ");
		
		
		for(String ss:array)
		{
			array_size++;
			
					
		}
		for(int j=0;j<array_size;j++)
		{
			//System.out.print(array[j]+"\n");
		//StringBuilder fUpper=new StringBuilder(input.length());	
		char fUpper= Character.toUpperCase(array[i].charAt(0));
			array[i]=array[i].substring(1,array[i].length());
		//Character.toUpperCase(array[i].charAt(0));
			//System.out.print(fUpper);
			
			
		//	char dummy=array[i].charAt(0);
			
			
			//array[i]=array[i].replace(dummy ,fUpper);
			
			temp=temp +fUpper+array[i]+" ";
			
			i++;
			
			
			
		}
		//char[] temp;
		System.out.print(temp);
		
	}

	public static void main(String[] args) {
		
		usermain("hello world");
		usermain("sena sudsh");
		
		

	}

}
