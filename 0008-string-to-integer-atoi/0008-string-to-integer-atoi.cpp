class Solution {
public:
    int myAtoi(string s) {

    string str = "";

    //step one reomve leading whitspaces
    int j = 0;
    while(j < s.size() && s[j] == ' ' ){
        j++;
    }

    // remove the leading whitespaces
    s.erase(0, j);

    // if string becomes empty
    if(s.empty()){
        return 0;
    }


    //determine the sign
    char sign = '+';

    if(s[0] == '-'){
        sign = '-';
        //reomve the sign
        s.erase(0,1);
        
    }
    else if(s[0] == '+'){
        //remove the sign
        s.erase(0,1);
    }

    // if string becomes empty after sign
    if(s.empty()){
        return 0;
    }


    // //remove the leading zeros
    // while(s[0] == '0'){
    //     s.erase(0,1);
    // }


    //make string entir no until any char appear
    int i = 0;
    while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
        str.push_back(s[i]);
        i++;
    }


    if(str.empty()){
        return 0;
    }

    // str.insert(0, 1, sign);   // DON'T insert sign
                              // because we handle sign separately



    long long ans = 0;

    for(int i = 0; i < str.size(); i++) {

        int digit = str[i] - '0';

        // For positive number, maximum allowed value is INT_MAX
        // For negative number, maximum absolute value is 2147483648
        long long limit;

        if(sign == '-'){
            limit = 2147483648LL;
        }
        else{
            limit = INT_MAX;
        }


        //check for overflow before multiplying by 10
        if(ans > limit / 10 || 
           (ans == limit / 10 && digit > limit % 10)) {

            if(sign == '-'){
                return INT_MIN;
            }
            else{
                return INT_MAX;
            }
        }


        ans = ans * 10 + digit;
    }


    // apply the sign
    if(sign == '-'){
        return -ans;
    }

    return ans;


    // if(stoi(str) >= INT_MAX){
    //     ans = INT_MAX;
    // }

    // if(stoi(str) <= INT_MIN){
    //     ans = INT_MIN;
    // 


        
    }
};