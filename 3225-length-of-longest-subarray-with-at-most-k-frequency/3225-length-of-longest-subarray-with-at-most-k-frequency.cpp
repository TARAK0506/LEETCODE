class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0, j = 0, n = nums.size();
        int maxlen = 0;
        unordered_map<int, int> mp;
        while (j < n) {
            mp[nums[j]]++;
            while (mp[nums[j]] > k) {
                mp[nums[i]]--;
                i++;
            }
            maxlen = max(maxlen, j - i + 1);
            j++;
        }
        return maxlen;
    }
};