class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int mn=nums[0];
        int mx=nums[n-1];
        for(int i=mn;i<=mx;i++){
            if (find(nums.begin(),nums.end(),i)==nums.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};