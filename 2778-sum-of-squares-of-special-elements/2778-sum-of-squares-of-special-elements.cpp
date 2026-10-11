class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int size  = nums.size();
        for(int i = 0; i< size; i++){
            if( nums.size() %  (i+1) == 0){
                ans = ans + nums[i] * nums[i];
            }
        }
    return ans;
    }
};