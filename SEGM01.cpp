#include <iostream>
using namespace std;

int main() {
    
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
	    string str;
	    cin >> str;
	    
	    int s=0,e=(str.size()-1),flag;
	    
	    while(s<str.size() && str[s]!='1')
	    {
	        s+=1;
	    }
	    
	    while(e>=0 && str[e]!='1')
	    {
	        e-=1;
	    }
	    
	    if(s<=e)
	    {
	        int flag = 0;
	        
	        for(int j=s;j<=e;j++)
	        {
	            if(str[j]=='0')
	            {
	                flag = 1;
	                break;
	            }
	        }
	        
	        if(flag == 0)
	        {
	            cout << "YES" << endl;
	            continue;
	        }
	    }
	    cout << "NO" << endl;
	}
	
	
	return 0;
}
