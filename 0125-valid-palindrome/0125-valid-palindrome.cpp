class Solution {
public:
    bool isPalindrome(string s) {
        //first convert all sentence in lowercase
        for (char &c : s) {
        c = tolower(c);
        }



        //now remove all the non aphanumerical char
        for(int i = 0; i < s.size(); i++){
            if (!isalnum(s[i])) {   
            s.erase(i, 1);
            i--; // fix skipped character issue
            }

        }


        //now check is panlindrom or not 
        int st = 0; 
        int e = s.size()-1;
        while(st<= e){
            if(s[st] == s[e]){
                st++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};