//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        int i=1;
        while(i<n){
            int j=i-1;
            int temp = a[i]; 
            while(j>=0) {
                if(a[j]>temp){
                    a[j+1]=a[j];
                }
                else {
                  break;
                }
                j--;
            }
            a[j + 1] = temp;
            i++;
        }
        return a[n-3];
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends