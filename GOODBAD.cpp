#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int n,k;
	    cin >> n >> k;
	    
	    string st;
	    cin >> st;
	    
	    int l=0,u=0;
	    
	    for(int j=0;j<st.size();j++)
	    {
	        if(isupper(st[j]))
	        {
	            u+=1;
	        }
	        else
	        {
	            l+=1;
	        }
	    }
	    
	    if(u<=k && l<=k)
	    {
	        cout << "both" << endl;
	    }
	    else if(u<=k)
	    {
	        cout << "chef" << endl;
	    }
	    else if(l<=k)
	    {
	        cout << "brother" << endl;
	    }
	    else
	    {
	        cout << "none" << endl;
	    }
	}
	
	return 0;
}
