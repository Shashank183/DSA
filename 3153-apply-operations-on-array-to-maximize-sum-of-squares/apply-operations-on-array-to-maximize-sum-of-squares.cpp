class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        int MOD= 1000000007;
        vector<int> cnt(31, 0);

        for (int num : nums) {
            for (int bit = 0; bit < 31; bit++) {
                if (num & (1 << bit)) {
                    cnt[bit]++;
                }
            }
        }

        long long ans = 0;

        while (k--) {
            long long curr = 0;

            for (int bit = 0; bit < 31; bit++) {
                if (cnt[bit] > 0) {
                    curr |= (1LL << bit);
                    cnt[bit]--;
                }
            }

            ans = (ans + (curr * curr) % MOD) % MOD;
        }

        return ans;
        
    }
};