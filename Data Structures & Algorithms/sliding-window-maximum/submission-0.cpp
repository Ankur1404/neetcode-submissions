class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int>ans;

        for(int i = 0;i<=n-k;i++)
        {
            int maxa = INT_MIN;
            for(int j = i;j<i+k;j++)
            {
                maxa = max(maxa,nums[j]);
            }
            ans.push_back(maxa);
        }
        return ans;
    }
};
