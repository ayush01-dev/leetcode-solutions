// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int s = 0;
//         int e - nums.size()-1;
//         int mid = s+(e-s)/2;
//         vector <int> ans = {-1,-1};


//         //TO CHECK FIRST OCCURING ELEMENT
//         while(s<=e){
            
//             //if mid is equal to target
//             if(nums[mid] == target){
//                 //check right of mid
//                 ans[0] = mid;
//             }


//             //if found now search in left;
//             else {
//                 //serach in left
//                 e = mid-1;
//             }

//         }
   

//     }
// };


class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1; // keep searching in left
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1; // keep searching in right
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};
