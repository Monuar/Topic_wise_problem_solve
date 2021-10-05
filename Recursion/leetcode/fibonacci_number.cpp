class Solution {
public:
    int solve(int n)
    {
        if(n==0||n==1) return 1;
        return solve(n-1)+solve(n-2);
    }
    int fib(int n) {
        int sum=0;
        if(n==0) return 0;
        sum+=solve(n-1);

        return sum;
    }
};
