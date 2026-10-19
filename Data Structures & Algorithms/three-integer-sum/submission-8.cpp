class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        std::sort(nums.begin(),nums.end());
        int i = 0;
        int n = nums.size();
        if(n<3) return {};
        for(;i<n-2;i++){
            if(nums[i]>0){break;}
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int k = n-1;
            int j = i + 1;
            while(j<k){
            
            int sum = nums[i]+nums[j]+nums[k];
            if(sum>0){
                k--;
            }else if(sum == 0){
                result.push_back({nums[i],nums[j],nums[k]});
                while(j <k &&nums[j] == nums[j+1]){j++;}
            while(j<k && nums[k] == nums[k-1]){k--;}
            j++;
            k--;

            }else{
                j++;
            }
            
            
        }
        }
        return result;
    }
};