class Solution {
public:
    string reverse(string word,int index){
        int s=0,e=index;
        while(s<=e){
            swap(word[s++],word[e--]);
        }
        return word;
    }
    string reversePrefix(string word, char ch) {
        int index=-1;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch) {
                index=i;
                break;
            }
        }
        return reverse(word,index);
    }
};