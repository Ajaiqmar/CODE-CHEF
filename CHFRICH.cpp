#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int a,b,x;
	    cin >> a >> b >> x;
	    
	    int ans = ((b-a)/x);
	    
	    cout << ans << endl;
	}
	return 0;
}
