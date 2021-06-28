#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int n;
	    cin >> n;
	    
	    int temple[n];
	    for(int j=0;j<n;j++)
	    {
	        cin >> temple[j];
	    }
	    
	    if(n%2 == 0)
	    {
	        cout << "no" << endl;
	    }
	    else
	    {
	        int startIndex = 0, endIndex = n-1, flag = 0;
	        
	        while(startIndex <= endIndex)
	        {
	            if(startIndex+1 == temple[startIndex] && temple[startIndex] == temple[endIndex])
	            {
	                startIndex += 1;
	                endIndex -= 1;
	            }
	            else
	            {
	                flag = 1;
	                break;
	            }
	        }
	        
	        if(flag)
	        {
	            cout << "no" << endl;
	        }
	        else
	        {
	            cout << "yes" << endl;
	        }
	    }
	}
	return 0;
}
