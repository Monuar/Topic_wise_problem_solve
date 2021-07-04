class Solution {
public:
    bool isPowerOfTwo(int n) {


       if(n<=0) return false;
        else{
            int m=n-1;
            if((n&m)==0) return true;
            else return false;
        }

    }
};
