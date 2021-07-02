#include <iostream>
using namespace std;

int main() 
{
	long long int T;
	cin >> T;
	
	for(long long int i=0;i<T;i++)
	{
	    long long int g,c;
	    cin >> g >> c;
	    
	    long long int H = (c*c)/(2*g);
	    
	    cout << H << endl;
	}
	
	return 0;
}
