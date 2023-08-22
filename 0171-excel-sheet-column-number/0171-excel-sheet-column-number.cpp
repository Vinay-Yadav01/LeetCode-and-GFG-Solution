class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0,size=columnTitle.size();
        for(int i=0;i<size;i++){
            int temp = columnTitle[i]-64;
            ans=ans*26+temp;
        }
        return ans;
    }
};