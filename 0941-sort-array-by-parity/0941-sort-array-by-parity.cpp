class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] % 2 != 0){
        //         nums.push_back(nums[i]);
        //         nums.erase(nums.begin() + i);

        //     }

        //two pointers approch
        int s = 0;
        int e = nums.size()-1;
        while(s <= e){
            if(nums[s]%2 == 0){
                s++;
            }
            else if(nums[e]%2 != 0){
                e--;
            }
            else{
            //swap 
            swap(nums[s],nums[e]);
            s++;
            e--;
            }
            
           
        }
    return nums;
    }
};