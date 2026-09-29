class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> number_to_index;
        for(int i=0;i<nums.size();++i){
            int component = target - nums[i];
            if( number_to_index.find(component) !=  number_to_index.end() ){
                return{number_to_index[component],i};
            }
            number_to_index[nums[i]] =i;
        } 
        return{};
    }
        
    
};
