class Solution {
   public:
    int trap(vector<int>& height) {
        if(height.size()<=2){
            return 0;
        }
        int result = 0;
        int left = 0, right = height.size()-1;
        int maxleft =height[left]  , maxright = height[right];
        while(left<right){
            if(height[left]<height[right]){
                left++;
                maxleft=max(height[left],maxleft);
                result=result+maxleft-height[left];
            }else{
                right--;   
                maxright=max(height[right],maxright);
                result=result+maxright-height[right];
            }
        }
        return result;
    }
    
};
