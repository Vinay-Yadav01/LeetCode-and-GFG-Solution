//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int ans;
        int count = 0;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n-1;
        int endingCol = m-1;       
        while(count < k) {
            for(int index = startingCol; count < k && index<=endingCol; index++) {
                count++;
                if(count==k) ans=a[startingRow][index];
            }
            startingRow++;
            for(int index = startingRow; count < k && index<=endingRow; index++) {
                count++;
                if(count==k) ans=a[index][endingCol];
            }
            endingCol--;
            for(int index = endingCol; count < k && index>=startingCol; index--) {
                count++;
                if(count==k) ans=a[endingRow][index];
            }
            endingRow--;
            for(int index = endingRow; count < k && index>=startingRow; index--) {
                count++;
                if(count==k) ans=a[index][startingCol];
            }
            startingCol++;
        } 
        return ans;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends