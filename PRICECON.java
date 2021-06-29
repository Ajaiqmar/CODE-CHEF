
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
		    int n = sc.nextInt(),k = sc.nextInt(),ans = 0;
		    
		    for(int j=0;j<n;j++)
		    {
		        int prices = sc.nextInt();
		        if(prices > k)
		        {
		            ans += (prices-k);
		        }
		    }
		    
		    System.out.println(ans);
		}
	}
}
