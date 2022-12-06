//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int val = 1;
    int atoi(string str) {
        bool temp = false;
        if(str[0] == '-') {
            str.erase(0, 1);
            if(str[0] == '-' || str[0] - '0' > 9 || str[0] == '+'){
                return(-1);
            }
            temp = true;
        }
        int val = atoi1(str);
        if(temp) {
            return(-val);
        }
        return(val);
    }
    
    int atoi1(string str) {
        if(str.length() == 1){
            if(str[0] - '0' > 9) {
                return(-1);
            }
            return(str[0] - '0');
        }
        char c = str[0];
        if(c - '0' > 9) {
            return(-1);
        }
        str.erase(0, 1);
        int x = atoi(str);
        if(x == -1){
            return(-1);
        }
        val = val*10;
        return((c - '0')*val+x);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends