//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int ans=0,rem=0,i=0;
    while(n!=0){
        rem=n%10;
        if(rem==0){
            rem=5;
            ans=ans+rem*pow(10,i);
        }
        else{
            ans=ans+rem*pow(10,i);
        }
        i++;
        n/=10;
    }
    return ans;
}