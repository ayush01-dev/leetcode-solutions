class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int till = n/2;
        // for(int i = 0; i<= till ; i++){
        //     if(pow(2,i) == n ) return true;

        // }
        // return false;
        double val =  1;
        while(val < n){
            val *= 2;
            if(n <= 0) return false;
            
            
        }
    return val==n;
    }
};