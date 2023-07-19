class Solution {
private:
    int gcd(int a,int b){

        if(a==0) return b;
        if(b==0) return a;
        while(a!=b){
            if(a>b) a=a-b;
            else b=b-a;
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            mini=min(nums[i],mini);
        }
        return gcd(maxi,mini);
    }
};