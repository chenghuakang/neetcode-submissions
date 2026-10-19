class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int left = 0;
        int right = heights.size()-1;
        while(left<right){
            result = (right - left) * (min(heights[left],heights[right])) > result ? (right - left) * (min(heights[left],heights[right])):result;
            if(heights[left] < heights[right]){
                left++;
            }else if(heights[left] > heights[right]){
                right--;
            }else{
                left++;
                right--;
            }
        }
        return result;
    }
};
