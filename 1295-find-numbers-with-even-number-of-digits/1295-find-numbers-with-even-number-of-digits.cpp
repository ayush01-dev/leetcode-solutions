class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size(); i++){
            int quotient = nums[i]/10;
            int reminder = nums[i]%10;
            int noOfdigits = 1;
            while(quotient != 0){

                noOfdigits++;
                reminder = quotient%10;
                quotient =  quotient/10;
                
                
                

            }
            if(noOfdigits % 2 == 0){
                ans++;
            }
            

        }
    return ans;
    }
};