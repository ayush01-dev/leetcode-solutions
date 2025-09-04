class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> varr;
        for(int i = 0; i< nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    varr.push_back(nums1[i]);
                    break;
                }
            }

        }
        
    sort(varr.begin(), varr.end());
    varr.erase(unique(varr.begin(), varr.end()), varr.end());

    return varr;
    }
};