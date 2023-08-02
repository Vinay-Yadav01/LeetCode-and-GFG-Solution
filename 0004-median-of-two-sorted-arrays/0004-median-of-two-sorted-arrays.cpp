class Solution {
public:
    void merge(vector<int> nums1,int n, vector<int> nums2,int m, vector<int>& ans){
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
                ans[k++]=nums1[i++];
            }
            else{
                ans[k++]=nums2[j++];
            }
        }
        while(i<n){
                ans[k++]=nums1[i++];
        }
        while(j<m){
            ans[k++]=nums2[j++];
        }
    }    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        int n=nums1.size(),m=nums2.size();
        vector<int> ans(n+m,0);
        merge(nums1,n,nums2,m,ans);
        int size=ans.size();

        if(size%2==0){
            median=(ans[size/2]+ans[(size/2)-1])/2.0;
        }
        else{
            median=ans[size/2];
        }
        return median;
    }
};