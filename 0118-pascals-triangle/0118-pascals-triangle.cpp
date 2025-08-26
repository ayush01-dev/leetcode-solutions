class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Step 1: Create matrix of size numRows x numRows filled with 0
        vector<vector<int>> matrix(numRows, vector<int>(numRows, 0));

        // Step 2: Fill Pascal's triangle
        for (int i = 0; i < numRows; i++) {
            matrix[i][0] = 1; // first column always 1
            matrix[i][i] = 1; // diagonal always 1

            for (int j = 1; j < i; j++) {
                matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
        }

        // Step 3: Convert to triangular result (remove extra 0s)
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                row.push_back(matrix[i][j]);
            }
            result.push_back(row);
        }

        return result;
    }
};
