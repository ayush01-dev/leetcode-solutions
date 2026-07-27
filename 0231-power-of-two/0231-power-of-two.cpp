class Solution {
public:
    bool checkPow(int n){
        //base case
        if(n == 1){
            return true;
        }
        if(n <= 0){
            return false;
        }
        if(n%2 == 0){
            //recusive realtion
            return checkPow(n/2);
        }
        return false;   
        

    }
    bool isPowerOfTwo(int n) {
        // int till = n/2;
        // for(int i = 0; i<= till ; i++){
        //     if(pow(2,i) == n ) return true;

        // }
        // return false;

        //method 1
    //     double val =  1;
    //     while(val < n){
    //         val *= 2;
    //         if(n <= 0) return false;
            
            
    //     }
    // return val==n;
        return checkPow(n);

    }
};