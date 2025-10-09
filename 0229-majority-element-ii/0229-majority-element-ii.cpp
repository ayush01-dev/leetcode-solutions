class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int value = n/3;
        unordered_set<int> s;
        for(int i = 0 ; i< n ; i++){
            int count = 0;

            for(int j =  i ; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }   
            }   
            if(count > value) {
                s.insert(nums[i]);  // store unique element
            } 
        }

        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};