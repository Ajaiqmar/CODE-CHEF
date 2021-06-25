#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int n,ans = 0;
	    cin >> n;
	    
	    for(int j=0;j<n;j++)
	    {
	        int s,e;
	        cin >> s >> e;
	        
	        if((e-s) > 5)
	        {
	            ans += 1;
	        }
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}
