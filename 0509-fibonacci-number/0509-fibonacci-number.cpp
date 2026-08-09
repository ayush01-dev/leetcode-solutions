class Solution {
public:
    int fibRec(int n){
        //base case
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        //recursive realtion
        return fibRec(n-1)+fibRec(n-2);

    }
    
    int fib(int n) {
        int ans = fibRec(n);
        return ans;
    }
};