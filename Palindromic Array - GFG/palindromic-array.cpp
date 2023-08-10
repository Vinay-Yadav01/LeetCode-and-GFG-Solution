//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool isPalindrome(int num){
        int rev=0,temp=num;
        while(temp!=0){
            int rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        if(num==rev) return true;
        else return false;
    }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(isPalindrome(a[i])==false){
    	        return false;
    	    }
    	}
    	return true;
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
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends