class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int buffer[2001] = {};
        for(int num:nums){
            buffer[num+1000] ++;
        }
        vector<pair<int,int>> buffer2;
        for(int i = 0;i<2001;i++){
            if(buffer[i] != 0){
                buffer2.push_back({buffer[i],i-1000});
            } 
        }
        sort(buffer2.begin(),buffer2.end());
        vector<int> result;
        for(int i = 0  ;i < k;i++){
            result.push_back((buffer2.rbegin() + i) -> second);
        }
        return result;
    }
};
