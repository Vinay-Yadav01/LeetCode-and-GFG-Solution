//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    void reverse(vector<long long>& arr,int s,int e){
        while(s<=e){
            swap(arr[s++],arr[e--]);
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int s=0,e=n-1;
        while(s<e){
            if(s+k-1>e){
                reverse(arr,s,e);
                s=e;
            }
            else reverse(arr,s,s+k-1);
            s=s+k;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends