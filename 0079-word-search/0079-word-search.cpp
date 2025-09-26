#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        if (m == 0) return false;
        int n = board[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, i, j, 0)) return true;
                }
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, const string& word, int r, int c, int idx) {
        if (idx == (int)word.size()) return true; // matched all chars
        int m = board.size(), n = board[0].size();
        // bounds and char check
        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != word[idx]) return false;

        // mark visited by temporarily changing the cell
        char saved = board[r][c];
        board[r][c] = '#';

        // explore 4 directions
        bool found = dfs(board, word, r + 1, c, idx + 1)
                  || dfs(board, word, r - 1, c, idx + 1)
                  || dfs(board, word, r, c + 1, idx + 1)
                  || dfs(board, word, r, c - 1, idx + 1);

        // restore the cell
        board[r][c] = saved;
        return found;
    }
};
