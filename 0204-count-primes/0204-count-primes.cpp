class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool> prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]==1){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return count;
    }
};