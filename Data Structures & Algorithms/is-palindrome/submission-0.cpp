class Solution {
public:
    bool isPalindrome(string s) {
        string s_ ;
        for(char ch:s){
            if(ch<='z' && ch>= 'a' || ch<='9' && ch>= '0'){
                s_ += ch;
            }
            if(ch<='Z' && ch>='A'){
                s_ += ch + 32;
            }
        }
        int left = 0, right = s_.size()-1;
        for(;left<right;left++,right--){
            if(s_[left] != s_[right]){
                return false;
            }
        }
        return true;
        
    }
};
