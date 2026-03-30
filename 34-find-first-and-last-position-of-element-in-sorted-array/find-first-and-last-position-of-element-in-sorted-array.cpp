class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> b;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                b.push_back(i);
            }
            
        }
        if(b.empty()){
            return{-1,-1};
        }
        return {b.front(), b.back()};
    }
};