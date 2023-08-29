//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        vector<int> visit1(26);
        vector<int> visit2(26);
        for(int i=0;i<a.size();i++){
            int ch = a[i]-'a';
            visit1[ch]++;
        }
        for(int i=0;i<b.size();i++){
            int ch = b[i]-'a';
            visit2[ch]++;
        }
        for(int i=0;i<26;i++){
            if(visit1[i]!=visit2[i]) {
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends