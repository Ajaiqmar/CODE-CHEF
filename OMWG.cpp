#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int n,m;
	    cin >> n >> m;
	    
	    int ans = ((n*m)*2)-(n+m);
	    
	    cout << ans << endl;
	}
	
	return 0;
}
