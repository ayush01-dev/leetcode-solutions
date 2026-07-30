class Solution {
public:
    bool checkMaxCol (vector<vector<int>>& matrix ,int a, int min){
        int row = 0;
        int max = INT_MIN;
        while(row< matrix.size()){
            //we have to check is this min is max in that col
            if(matrix[row][a] > max){
                //update max
                max = matrix[row][a];
            }
            row++;
        }

        if(min == max){
            return true;
        }
        return false;
    }
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        //first find minimum in row 

        int a = -1;
        vector<int>ans;
        for(int i = 0; i < matrix.size(); i++){
            int min =INT_MAX;
            for(int j = 0; j< matrix[i].size(); j++){
                if(matrix[i][j] < min){
                    min = matrix[i][j];
                    a = j;
                }
            }
            //we got the min in ith row
            //now have to check is this no is also max in its column
            if(checkMaxCol(matrix,a,min)){
 
                ans.push_back(min);

            }
        
        }

        // then check is this no is also the largest in the column

        //if not  check the next row
    return ans;
    }
};