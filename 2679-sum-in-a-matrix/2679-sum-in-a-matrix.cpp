class Solution {
public:
    int maxi(vector<vector<int>>& nums,int size,int row){
        int maximum=0,index=0;
        for(int i=0;i<size;i++){
            if(nums[row][i]>maximum) {
                maximum = nums[row][i];
                index=i;
            }
        }
        nums[row][index]=0;
        cout<<maximum<<" ";
        return maximum;
    }
    int matrixSum(vector<vector<int>>& nums) {
        int ans=0;
        int n = nums.size();
        int size = nums[0].size();
        for(int i=0;i<size;i++){
            int maximum=0;
            for(int j=0;j<n;j++){
                int maxRow=maxi(nums,size,j);
                if(maximum < maxRow ) maximum = maxRow;                
            }
            ans+=maximum;
            cout<<endl;
        }
        return ans;
    }
};