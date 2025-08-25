//**TODO:** Optimize the code after understanding 2D vector more.
class Solution {
public:
    void makeZeros(vector<vector<int>>&matrix, vector<int>Is, vector<int>Js ){
        for(int i = 0; i < Is.size(); i++){
            int a = Is[i];
            int b = Js[i];

            int x = 0;
            while(x<matrix.size()){
                matrix[x][b] = 0;
                x++;
            }

            int y = 0;
            while(y<matrix[a].size()){
                matrix[a][y] = 0;
                y++;
            }
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>Is;
        vector<int>Js;
        for(int i = 0; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[i].size() ; j++){
                if(matrix[i][j] == 0){
                    
                    Is.push_back(i);
                    Js.push_back(j);
                    
                }
            }
        }
        makeZeros(matrix,Is,Js);
    }
};