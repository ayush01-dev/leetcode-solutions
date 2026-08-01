class Solution {
public:
    bool checkZeroOnes(string s) {

        int maxOnes = 0;
        int maxZeros = 0;

        int count = 1;

        if (s[0] == '1')
            maxOnes = 1;
        else
            maxZeros = 1;

        for (int i = 1; i < s.size(); i++) {

            if (s[i] == s[i - 1])
                count++;
            else
                count = 1;

            if (s[i] == '1')
                maxOnes = max(maxOnes, count);
            else
                maxZeros = max(maxZeros, count);
        }

        return maxOnes > maxZeros;
    }
};