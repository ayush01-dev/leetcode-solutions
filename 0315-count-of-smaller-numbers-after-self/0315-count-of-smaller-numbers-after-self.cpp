class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> sorted; // keep sorted elements we've seen

        for (int i = n - 1; i >= 0; i--) {
            // Find how many elements are smaller
            int idx = lower_bound(sorted.begin(), sorted.end(), nums[i]) - sorted.begin();
            ans[i] = idx;

            // Insert nums[i] into sorted vector
            sorted.insert(sorted.begin() + idx, nums[i]);
        }
        return ans;
    }
};
