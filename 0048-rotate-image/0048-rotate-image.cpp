class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector <vector<int>> dup =  matrix;
        for(int i = 0; i<matrix.size(); i++){
            int k = 0;
            for(int j = matrix[0].size() - 1; j >= 0; j--){
                matrix[i][k] = dup[j][i];
                k++;
            }
        }
    
    }
};