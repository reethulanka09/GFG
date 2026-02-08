class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxHere = nums[0];
        int minHere = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int temp = maxHere;

            maxHere = max(nums[i], max(nums[i] * maxHere, nums[i] * minHere));
            minHere = min(nums[i], min(nums[i] * temp, nums[i] * minHere));

            ans = max(ans, maxHere);
        }
        return ans;
    }
};
