class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int n : nums){
            ans ^= n;   // XOR all numbers
        }
        return ans;
    }
};
