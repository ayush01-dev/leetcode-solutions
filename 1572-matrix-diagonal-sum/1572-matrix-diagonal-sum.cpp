class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i = 0; 
        int j = 0;
        int sum = 0;
        //sum first diagonal
        while(i<mat.size()){
            sum = sum + mat[i][j];
            i++;
            j++;

        }
        //sum second diagoanl
        int k = mat.size()-1;
        int l = 0;
        while(k<=mat.size()){
            if( k != l ) {
                sum = sum + mat[k][l];
            }
            
            
            k--;
            l++;
        }
    return sum;
    }
};