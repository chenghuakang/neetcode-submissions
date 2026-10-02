class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> buffer1;
        vector<int> buffer2;
        vector<int> result;
        buffer1.push_back(1);
        buffer2.push_back(1);
        for (auto i = nums.begin();i<nums.end()-1;i++) {
            buffer1.push_back(*i * *(buffer1.end()-1));
        }
        for (auto i = nums.end(); i > nums.begin() + 1; i--) {
            buffer2.push_back(*(i - 1) * *(buffer2.end()-1));
        }
        for(int i = 0;i<nums.size();i++){
            result.push_back(buffer1[i] * buffer2[nums.size() - i - 1]);
        }
        return result;
    }
};
