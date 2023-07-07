class Solution {
public:
    int addNum(int num){
        int temp=num,sum=0;
        while(temp){
            sum+=temp%10;
            temp/=10;
        }
        return sum;

    }
    int addDigits(int num) {
        while(num/10!=0){
            num=addNum(num);
        }
        return num;
    }
};