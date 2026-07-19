class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     set<vector<int>> st;
    //     for(int i = 0; i < nums.size() ; i++){
    //         for(int j = i+1; j<nums.size(); j++){
    //             for(int k = j+1; k<nums.size(); k++){
    //                 if(nums[i]+nums[j]+nums[k] == 0){
    //                     st.insert({nums[i], nums[j], nums[k]});
    //                 }
    //             }
    //         }
            
            

    //     }
    
    // vector<vector<int>> an{s(st.begin(), st.end());
    // return ans;


    sort(nums.begin(),nums.end());
    set<vector<int>> st;
    for(int i= 0; i < nums.size();i++){
        int left = i+1;
        int right = nums.size()-1;
        while(left<right){
            if(nums[i] + nums[left]+nums[right] == 0){
                st.insert({nums[i],nums[right],nums[left]});
                left++;
                right--;
            }
            else if ((nums[i] + nums[left]+nums[right])<0){
                //increment left
                left++;
            }
            else{
                right--;
            }

        }
    }


    vector<vector<int>> ans (st.begin(),st.end());
    return ans;
    }
};