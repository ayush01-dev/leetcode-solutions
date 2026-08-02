// 

class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans;
        bool started = false;

        for (int i = s.size() - 1; i >= 0; i--) {

            if (s[i] == ' ') {
                if (started)
                    break;
                continue;
            }

            started = true;
            ans.push_back(s[i]);
        }

        return ans.length();
    }
};