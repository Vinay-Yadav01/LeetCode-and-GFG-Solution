//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int firstsearch(vector<int> arr,int n, int target) {
        int s=0,e=n-1;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
    int lastsearch(vector<int> arr,int n, int target) {
        int s=0,e=n-1;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int> ans;
        int first=firstsearch(arr,n,x);
        ans.push_back(first);
        if(first!=-1) ans.push_back(lastsearch(arr,n,x));
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends