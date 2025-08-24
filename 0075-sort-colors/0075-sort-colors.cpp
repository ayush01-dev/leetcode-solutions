class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int count0 = 0;
        // int count1 = 0;
        // int count2 = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == 0) {
        //         count0++;
        //     } else if (nums[i] == 1) {
        //         count1++;
        //     } else {
        //         count2++;
        //     }
        // }
        // int i = 0;
        // while (count0--) {
        //     nums[i] = 0;
        //     i++;
        // }
        // while (count1--) {
        //     nums[i] = 1;
        //     i++;
        // }
        // while (count2--) {
        //     nums[i] = 2;
        //     i++;
        // }.

        //In - place logic using three pointers approach
        int l = 0 , m = 0, h = nums.size()-1;
        while(m <= h){
            if(nums[m] == 0){
                swap(nums[m],nums[l]);
                l++, m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{//nums[m] == 2;
                swap(nums[m],nums[h]);
                h--;
            }
        }
        
    }
};