class Solution {
public:
    set<vector<int>>arr;
    int n;
    void recur(vector<int>& nums, int i, vector<int>abc){
        if(i==n){
            sort(abc.begin(), abc.end());
            arr.insert(abc);
            return;
        }
        recur(nums, i+1, abc);
        abc.push_back(nums[i]);
        recur(nums, i+1, abc);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        recur(nums, 0,{});
        vector<vector<int>>ans(arr.begin(), arr.end());
        return ans;
    }
};