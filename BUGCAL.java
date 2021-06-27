import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		
		for(int i=0;i<T;i++)
		{
		    int a = sc.nextInt(),b = sc.nextInt();
		    int ans = 0,p = 0;
		    
		    while(a!=0 && b!=0)
		    {
		        int v = ((a%10)+(b%10))%10;
		        
		        ans += (v*Math.pow(10,p));
		        
		        p += 1;
		        a = a/10;
		        b = b/10;
		    }
		    
		    while(a!=0)
		    {
		        int v = (a%10)%10;
		        
		        ans += (v*Math.pow(10,p));
		        
		        p += 1;
		        a = a/10;
		    }
		    
		    while(b!=0)
		    {
		        int v = (b%10)%10;
		        
		        ans += (v*Math.pow(10,p));
		        
		        p += 1;
		        b = b/10;
		    }
		    
		    System.out.println(ans);
		}
		
	}
}
