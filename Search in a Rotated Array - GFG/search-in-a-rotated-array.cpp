//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int getPivot(int A[],int n){
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(A[mid]>=A[e]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    } 

    int binarySearch(int A[],int s,int e,int target){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(A[mid]==target){
                return mid;
            }
            else if(A[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int n=h+1;
        int pivot  = getPivot(A,n);
        if(key>=A[pivot]&&key<=A[n-1]){
            return binarySearch(A,pivot,n-1,key);
        }
        else{
            return binarySearch(A,0,pivot-1,key);
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
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends