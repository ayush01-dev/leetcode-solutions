class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());


        //binaryserach
        for (int i = 0; i < nums1.size(); i++){
            int target = nums1[i];
            int s = 0;
            int end = nums2.size()-1;
            int mid = s+(end-s)/2;

            while(s<=end){
                // if (mid+1 <= end  && nums2[mid+1]==target){
                //     ans.push_back(nums2[mid+1]);
                //     break;
                // }
                // if (mid-1 >= s &&  nums2[mid-1]==target){
                //     ans.push_back(nums2[mid-1]);
                //     break;
                // }
                if(nums2[mid] > target){
                    //serach left
                    end = mid-1;

                }
                else if(nums2[mid] < target){
                    //serach right
                    s = mid+1;
                }
                else{
                    ans.push_back(nums2[mid]);
                    nums2.erase(nums2.begin() + mid);
                    break;
                }

                mid = s+(end-s)/2;
            }
            
        }
        



    return ans;
    }
};