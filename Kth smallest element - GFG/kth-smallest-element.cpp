//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition( int arr[], int s, int e) {

        int pivot = arr[s];
    
        int cnt = 0;
        for(int i = s+1; i<=e; i++) {
            if(arr[i] <=pivot) {
                cnt++;
            }
        }
    
        //place pivot at right position
        int pivotIndex = s + cnt;
        swap(arr[pivotIndex], arr[s]);
    
        //left and right wala part smbhal lete h 
        int i = s, j = e;
    
        while(i < pivotIndex && j > pivotIndex) {
    
            while(arr[i] <= pivot) 
            {
                i++;
            }
            while(arr[j] > pivot) {
                j--;
            }
            if(i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
            }
        }
        return pivotIndex;

    }

    void quickSort(int arr[], int s, int e) {
    
        //base case
        if(s >= e) 
            return ;
    
        //partitioon karenfe
        int p = partition(arr, s, e);
    
        //left part sort karo
        quickSort(arr, s, p-1);
    
        //right wala part sort karo
        quickSort(arr, p+1, e);
    
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        int n=r-l+1;
        quickSort(arr, 0, n-1);
        return arr[k-1];
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends