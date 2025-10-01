class Solution {
public:
    int maxArea(vector<int>& height) {
        //BRUTE force got TLE
        //int maxAr = INT_MIN;
        //int area,breadth,length;
        //     for(int i = 0; i < height.size(); i++){
        //         for(int j = i+1; j < height.size(); j++){
        //             breadth = min(height[i],height[j]);
        //             length = j - i;  // instead of length = j;
        //             area = length * breadth;
        //             maxAr = max(maxAr,area);

        //         }
        //     }
        // return maxAr;

    //using two pointers approach
        int maxAr = INT_MIN;
        int area,breadth,length;
        int start = 0;
        int end = height.size()-1;
        while(start < end){
            breadth = min(height[start],height[end]);
            length = end - start;
            area = length * breadth;
            maxAr = max(maxAr,area);
            if(height[start] < height[end]){
                start++;
            }
            else{
                end--;
            }
            
        }
    return maxAr;
    }
};