class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int i = 0;
        int j = n - 1;
        int pos = n - 1;
        
        while (i <= j) {
            int leftSq = nums[i] * nums[i];
            int rightSq = nums[j] * nums[j];
            
            if (leftSq > rightSq) {
                result[pos] = leftSq;
                i++;
            } else {
                result[pos] = rightSq;
                j--;
            }
            pos--;
        }
        
        return result;
    }
};