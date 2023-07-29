//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isNarcissistic(int N){
        int temp=N,power,res=0;
        while(temp!=0){
            power++;
            temp/=10;
        }
        temp=N;
        while(temp!=0){
            int rev=temp%10;
            res=res+pow(rev,power);
            temp/=10;
        }
        return N==res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isNarcissistic(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends