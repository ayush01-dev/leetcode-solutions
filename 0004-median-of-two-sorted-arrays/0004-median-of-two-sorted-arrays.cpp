class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = nums1;
        


        for(int i = 0; i<nums2.size(); i++){
            ans.push_back(nums2[i]);
        }

        sort(ans.begin(),ans.end());


        int s = 0;
        int e = ans.size()-1;
        int mid = s+(e-s)/2;;
        double midian;
    
        //if size is even
        if(ans.size() % 2 == 0){
            
            midian = (ans[mid]+ans[mid+1])/2.0; 
        }

        //if size is odd
        else{
            midian = ans[mid];
        }
        

    return midian;   
    }
};