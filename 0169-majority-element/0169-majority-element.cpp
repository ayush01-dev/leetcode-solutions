class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = n/2;

        for(int i = 0; i < n; i++){
            int temp = nums[i];
            int tempcount = 1;
            for(int j = i+1; j< n; j++){
                if(nums[j] == temp){
                    tempcount++;
                }
            }
        if(tempcount > maj)
            return temp;
        }
    return -1;
    }
};