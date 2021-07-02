#include <stdio.h>

int main() 
{
	int T;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    int n,maxCount = 0,x;
	    scanf("%d",&n);
	    
	    int digit[101]={0};
	    
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&x);
	        digit[x]++;
	        
	        if(digit[x] > maxCount)
	        {
	            maxCount = digit[x];
	        }
	    }
	    
	    printf("%d\n",n-maxCount);
	}
	
	return 0;
}
