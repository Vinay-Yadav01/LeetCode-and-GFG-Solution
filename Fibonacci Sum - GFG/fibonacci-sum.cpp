//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        long long int a=0,b=1,c=0,ans=0;
        long long int mod=1000000007;
        for(int i=0;i<N;i++){
            c=(a+b)%mod;
            a=b;
            b=c;
            ans+=a;
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends