#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int T;
	cin >> T;
	
	for(long long int i=0;i<T;i++)
	{
	    long long int n,k,ans = 0;
	    cin >> n >> k;
	    
	    int x;
	    
	    for(long long int j=0;j<n;j++)
	    {
	        cin >> x;
	        
	        if(x%k!=0)
	        {
	            int r = x%k, re = (((x/k)+1)*k)-x;
	            if(x>k)
	            {
	                ans += min(r,re);
	            }
	            else
	            {
	                ans += re;
	            }
	        }
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;
}
