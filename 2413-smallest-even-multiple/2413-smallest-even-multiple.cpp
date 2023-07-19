class Solution {
private:
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        else{
            if(a>b) return gcd(a-b,b);
            else return gcd(b-a,a);
        }
    }
public:
    int smallestEvenMultiple(int n) {
        return 2*n/(gcd(2,n));
    }
};