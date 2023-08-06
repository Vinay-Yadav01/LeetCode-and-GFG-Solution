//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int isRotatedPalindrome(string s)
	{
	    vector<int> str(26,0);
	    int n=s.size();
	    for(int i=0;i<n;i++){
	        int ch=s[i]-'a';
	        str[ch]++;
	    }
	    if(n%2==0){
    	    for(int i=0;i<26;i++){
    	        if(str[i]%2!=0) return 0;
    	    }
	    } 
	    else{
	        int cnt=0;
	        for(int i=0;i<26;i++){
    	        if(str[i]%2!=0){
    	            cnt++;
    	            if(cnt>1) return 0;
    	        }
    	    }
	    }
	    return 1;
	}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isRotatedPalindrome(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends