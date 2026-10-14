class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        vector<int> digits;

        while (sum > 0) {
            int d = min(9, sum);
            digits.push_back(d);
            sum -= d;
        }

        while ((int)digits.size() < num)
            digits.push_back(0);

        sort(digits.begin(), digits.end(), greater<int>());

        if (digits[0] == 0)
            return "";

        string ans = "";
        for (int d : digits)
            ans += char('0' + d);

        return ans;
    }
};