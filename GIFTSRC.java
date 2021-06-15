import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int t = Integer.parseInt(sc.nextLine().trim());
		
		for(int i=0;i<t;i++)
		{
		    int n = Integer.parseInt(sc.nextLine().trim());
		    String a = sc.nextLine().trim();
		    
		    int x = 0,y = 0;
		    
		    for(int j=0;j<a.length();j++)
		    {
		        if((j==0) || ((a.charAt(j)=='L' || a.charAt(j)=='R') && (a.charAt(j-1)=='U' || a.charAt(j-1)=='D')) || ((a.charAt(j)=='U' || a.charAt(j)=='D') && (a.charAt(j-1)=='L' || a.charAt(j-1)=='R')))
		        {
		            if(a.charAt(j)=='L')
		            {
		                x-=1;
		            }
		            else if(a.charAt(j)=='R')
		            {
		                x+=1;
		            }
		            else if(a.charAt(j)=='U')
		            {
		                y+=1;
		            }
		            else if(a.charAt(j)=='D')
		            {
		                y-=1;
		            }
		        }
		    }
		    
		    System.out.println(x+" "+y);
		}
		
	}
}
