class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int s=nums.size();
        for(int i =0;i<s;i++){     
            for(int j=i+1;j<s;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(min(i,j));
                    ans.push_back(max(i,j));
                    return ans;         
                }
            }
        }
        return ans;
    }
};