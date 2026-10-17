class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        unordered_set<int> set1;
        int result = 1;
        for(auto num:nums){
            set1.insert(num);
        }
        for(auto num:nums){
            if(set1.find(num-1) == set1.end()){
                int i = 0;
                while(set1.find(num+i) != set1.end()){
                    i++;
                }
                result = max(i,result);
            }
            
        }
        return result;
    }
};
