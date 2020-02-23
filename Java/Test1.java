import java.lang.*;

public class Test1
{
	public static void main(String args[])
	{   int i=0;
	 	String words="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	 	int length=words.length();
	 	String cons="";
	 	while(i!=length)
	 	{
	 	 if(words.charAt(i)!='A' && words.charAt(i)!='E' && words.charAt(i)!='I'&& words.charAt(i)!='O'&& words.charAt(i)!='U')
	 	 {
	 	 	System.out.print(Character.toLowerCase(words.charAt(i)));
	 	 }
	 	 i++;
	 	}
	}
}