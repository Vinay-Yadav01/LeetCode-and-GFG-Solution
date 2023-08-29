//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstsearch(int arr[],int n, int target) {
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
    int lastsearch(int arr[],int n, int target) {
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

    vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans;
        ans.push_back(firstsearch(arr,n,x));
        ans.push_back(lastsearch(arr,n,x));
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends