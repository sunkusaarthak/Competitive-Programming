//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    public: 
    void generate(string str, int pos, int num) {
        if(str.length() == num) {
            
            for(int i=0;i<str.length()-1;i++) {
                if(str[i] == '1' and str[i+1] == '1') {
                    return;
                }
            }
            cout << str << " ";
            return;
        }
        
        str.push_back('0');
        //cout << str << " " << pos << " " << num << "\n";
        generate(str, pos+1, num);
        str.pop_back();
        str.push_back('1');
        generate(str, pos+1, num);
    }
 
    void generateBinaryStrings(int num){
       string str;
       //cout << num;
       generate(str, 0, num);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        // cout << setprecision(9) << obj.switchCase(choice,vec) << endl;
        obj.generateBinaryStrings(n);
        cout << endl;
        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends