#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int d,x,y,z;
	    cin >> d >> x >> y >> z;
	    
	    int firstStrategy = x*7,secondStrategy = (d*y)+(z*(7-d));
	    
	    cout << max(firstStrategy,secondStrategy) << endl;
	}
	
	return 0;
}
