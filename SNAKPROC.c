#include <stdio.h>



int main() 
{
	int t;
	scanf("%d\n",&t);
	
	for(int i=0;i<t;i++)
	{
	    int n,v = 0;
	    scanf("%d\n",&n);
	    
	    char string[n+1];
	    scanf("%s\n",string);
	    
	    for(int j=0;j<n;j++)
	    {
	        if(string[j] == 'H')
	        {
	            v += 1;
	        }
	        else if(string[j] == 'T')
	        {
	            v -= 1;
	        }
	        
	        if(v<0 || v>1)
	        {
	            break;
	        }
	    }
	    
	    if(v == 0)
	    {
	        printf("Valid\n");
	    }
	    else
	    {
	        printf("Invalid\n");
	    }
	}
	return 0;
}

