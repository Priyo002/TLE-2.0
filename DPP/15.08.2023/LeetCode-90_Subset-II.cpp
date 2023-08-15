class Solution {
public:
    void helper(vector<int> &nums, vector<int> &ans, vector<vector<int>> &finalans, int idx) {
        if (idx == nums.size()) {
            finalans.push_back(ans);
            return;
        }
        ans.push_back(nums[idx]);
        helper(nums, ans, finalans, idx + 1);
        ans.pop_back();
        while (idx + 1 < nums.size() && nums[idx] == nums[idx + 1])idx++;
        helper(nums, ans, finalans, idx + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        sort(nums.begin(), nums.end());
        helper(nums, ans, finalans, 0);
        return finalans;
    }
};