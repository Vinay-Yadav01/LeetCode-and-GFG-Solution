class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
       int n = nums.size();
        int m = nums[0].size();

        int score = 0;

        for (int i = 0; i < n; i++){
            sort(nums[i].begin(), nums[i].end(), greater<int>());
        }

        for (int j = 0; j < m; j++){
            int maxi = nums[0][j];
            for (int i = 0; i < n; i++){
                maxi = max(maxi, nums[i][j]);
            }
            score += maxi;
        }

        return score; 
    }
};