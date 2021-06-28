
import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int T = Integer.parseInt(sc.nextLine());
		
		for(int i=0;i<T;i++)
		{
		    int n = Integer.parseInt(sc.nextLine()),ca = 0,cb = 0;
		    
		    String a = sc.nextLine().trim(), b = sc.nextLine().trim();
		    
		    for(int j=0;j<n;j++)
		    {
		        if(a.charAt(j) == '1')
		        {
		            ca += 1;
		        }
		        
		        if(b.charAt(j) == '1')
		        {
		            cb += 1;
		        }
		    }
		    
		    if(ca == cb)
		    {
		        System.out.println("YES");
		    }
		    else
		    {
		        System.out.println("NO");
		    }
		}
	}
}
