class Solution {
public:
    vector<int> reverse(vector<int> v){
        int s=0,e=v.size()-1;
        while(s<e){
            swap(v[s++],v[e--]);
        }
        return v;
    }
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1,carry=0,sum=0,s=0;
        vector<int> ans;
        s=digits[i]+1;
        carry=s/10;
        sum=s%10;
        ans.push_back(sum);
        i--;
        while(i>=0){
            s=digits[i]+carry;
            carry=s/10;
            sum=s%10;
            ans.push_back(sum);
            i--;
        }
        while(carry!=0){
            s=carry;
            carry=s/10;
            sum=s%10;
            ans.push_back(sum);
        }

        return reverse(ans);
    }
};