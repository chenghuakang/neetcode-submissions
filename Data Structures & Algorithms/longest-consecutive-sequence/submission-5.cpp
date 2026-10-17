class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set{nums.begin(),nums.end()};
        int result = 0;
        for(auto num:nums){
            if(num_set.count(num-1) == 0){
                int num_add = num;
                int expected_result = 1;
                while(num_set.count(num_add+1)){
                    num_add ++;
                    expected_result++;
                }
                result = max(result,expected_result);
            }
        }
        return result;
        
    }
};
