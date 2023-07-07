class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return 0;

        long long int reversed_num = 0;
        long long int temp = x;

        while (temp != 0){
            long long int digit = temp%10;
            reversed_num = reversed_num * 10 + digit;
            temp/=10;
        }
        return reversed_num == x;
    }
};