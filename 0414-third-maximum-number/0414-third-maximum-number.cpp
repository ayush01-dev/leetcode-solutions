class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>s (nums.begin(),nums.end());
        vector<int>varr(s.begin(),s.end());
        int ans;
        if(varr.size()-1 >=2){
            ans = varr[varr.size()-3];
            
        }
        if(varr.size()-1 == 1){
            ans = varr[1];
            
        }

        if(varr.size()-1 == 0){
            ans = varr[0];
           
        }
    return ans;    
    }
};