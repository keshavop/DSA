//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    string compareNM(int n, int m){
        // code here
        if(n==m){
            cout<<"equal"<<endl;
        }
        else if(n>m){
            cout<<"greater"<<endl;
        }
        else{
            cout<<"lesser"<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
// } Driver Code Ends