class Solution {
public:
    string reverseWords(string s) {

        //remove leading spaces

        // int i = 0;
        // while(s[i] == ' '){
        //     s.erase(0,i);
        //     i++;
        // }
        while(!s.empty() && s[0] == ' ') {
            s.erase(0, 1);
        }


        //remove trailing spaces

        // int j = s.length() - 1;
        // while(s[j] == ' '){
        //     s.erase(j-i+1);
        //     j--;
        // }
        // while(!s.empty() && s.back() == ' ') {
        //     s.pop_back();
        // }

        // remove leading spaces
        // int i = 0;
        // while(i < s.size() && s[i] == ' ') {
        //     s.erase(0, 1);
        // }

        // remove trailing spaces
        int j = s.length() - 1;
        while(j >= 0 && s[j] == ' ') {
            s.erase(j, 1);
            j = s.length() - 1;
        }




        //after removing leading and trailing spaces reverse the string 
        int e = s.length()-1;
        int count = 0;
        string b;
        
        while(e >= 0){
            if(s[e] != ' '){
            count++;
        }
        else{
            if(count > 0){
            b.append(s.substr(e+1, count));
            b.push_back(' ');
            count = 0;
            }
            
        }
        if(e == 0){
            b.append(s.substr(e,count));
        }
        e--;
        }

    return b;
    }
};