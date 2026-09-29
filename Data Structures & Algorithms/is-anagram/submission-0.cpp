class Solution {
public:
    bool isAnagram(string s, string t) {
        int letterNumber[52] = {};
        for(auto letter:s){
            letterNumber[(char)letter-'a']++;
        }
        for(auto letter:t){
            letterNumber[(char)letter-'a'+26]++;
        }
        for(int i = 0;i<26;i++){
            if(letterNumber[i] != letterNumber[i+26]){
                return false;
            }
        }
        return true;
    }
};
