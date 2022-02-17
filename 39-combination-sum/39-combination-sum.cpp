class Solution
{
public:
    // not mine
    void helper(int i, int tar, vector<int> &cand, vector<int> &temp, vector<vector<int>> &ans)
    {
        if (i == cand.size())
        {
            if (!tar)
            {
                ans.push_back(temp);
            }
            return;
        }
        else if (cand[i] <= tar)
        {
            temp.push_back(cand[i]);
            helper(i, tar - cand[i], cand, temp, ans);
            temp.pop_back();
        }
        helper(i + 1, tar, cand, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, target, candidates, temp, ans);
        return ans;
    }
};