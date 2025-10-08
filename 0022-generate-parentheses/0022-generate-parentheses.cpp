class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
    }

    void backtrack(vector<string>& ans, string curr, int open, int close, int n) {
        // Base case: when both open and close parentheses are used up
        if (curr.size() == n * 2) {
            ans.push_back(curr);
            return;
        }

        // If we can still add an opening parenthesis
        if (open < n)
            backtrack(ans, curr + "(", open + 1, close, n);

        // If we can still add a closing parenthesis (only if open > close)
        if (close < open)
            backtrack(ans, curr + ")", open, close + 1, n);
    }
};
