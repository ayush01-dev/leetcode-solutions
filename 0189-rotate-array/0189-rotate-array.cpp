class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> dup_vec = nums;
        int n = nums.size();

        // handle case when k > n
        k = k % n;

        int i = 0;
        while (i < n) {
            nums[(i + k) % n] = dup_vec[i];
            i++;
        }
    }
};
