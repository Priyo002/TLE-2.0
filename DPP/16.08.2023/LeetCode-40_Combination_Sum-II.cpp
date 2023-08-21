class Solution {
public:
    void go(vector<int> &a, int idx, int tgt, vector<int> &temp, vector<vector<int>> &ans) {
        if (tgt == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < a.size(); i++) {
            if (i != idx && a[i] == a[i - 1]) continue;
            if (tgt >= a[i]) {
                temp.push_back(a[i]);
                go(a, i + 1, tgt - a[i], temp, ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        vector<vector<int>> ans;
        sort(a.begin(), a.end());
        vector<int> temp;
        go(a, 0, target, temp, ans);
        return ans;
    }
};