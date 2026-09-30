class Solution {
public:
    int memo[50] = {0};
    int climbStairs(int n) {
        return rec(n,0);
    }
    int rec(int n,int i){
        if(i>=n) return i==n;
        if(memo[i] != 0) return memo[i];
        return memo[i] = rec(n,i+1)+rec(n,i+2);
    }
};
