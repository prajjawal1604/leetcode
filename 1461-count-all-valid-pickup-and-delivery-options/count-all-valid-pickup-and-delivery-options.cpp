class Solution {
public:
    int countOrders(int n) {
        int mod=pow(10,9)+7;
        vector<int> dp(n+1);

        dp[0]=1;

        for(long long i=1;i<=n;++i){
            dp[i]=(dp[i-1]*i*(2*i-1))%mod;
        }

        return dp[n];

    }
};