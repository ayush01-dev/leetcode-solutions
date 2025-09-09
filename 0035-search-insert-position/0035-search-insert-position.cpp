class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ans = 0;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // found
            if (nums[mid] == target) {
                return mid;
            }

            // nums[mid] < target → search in right
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            // nums[mid] > target → search in left
            else {
                e = mid - 1;
            }
        }

        // if not found, s is the correct insert position
        return s;
    }
};
