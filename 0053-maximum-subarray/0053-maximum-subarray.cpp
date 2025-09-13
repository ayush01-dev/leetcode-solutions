class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    //     int maxi = INT_MIN; 
    //     for(int i = 0; i< nums.size(); i++){
    //         int sum = 0;
    //         for(int j = i; j<nums.size(); j++){
    //             sum = nums[j] + sum;
    //             maxi = max(sum,maxi);
    //         }
    //     }
    // return maxi;
    // }


    //Kadanes algo (this is the algo for O(n) where we don't carry some less then zero)

    //because negative sum will always make sum less 
    //dry run it and visualise it :)

        int sum = 0;
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];

            if(sum > max){
                max = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }
    return max;
    }


};