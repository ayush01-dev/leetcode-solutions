#include <cctype>
class Solution {
public:
    bool detectCapitalUse(string word) {
        int val = 0;
        for(int i = 0; i < word.length() ; i++){
            //case1: all are capital
            if(word[i] >= 'A' && word[i] <= 'Z') {
                val++;
            }
            
        }
        if(val == 0) return true;
        if(val == word.length()) return true;
        
        int val2 = 0;
        if(word[0] >= 'A' && word[0] <= 'Z'){
        for(int i = 1; i < word.length() ; i++){
            //case1: all are capital
            if(word[i] >= 'A' && word[i] <= 'Z') {
                val2++;
            }
            
        }

        if(val2 == 0)  return true;


        }


        return false;

    }
};