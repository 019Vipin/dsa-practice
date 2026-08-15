class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int txor=0;
        bool allz=true;
        for(int i=0;i<n;i++){
            txor ^= nums[i];
            if(nums[i]!=0) allz=false;
        }
        if(allz) return 0;
        else if (txor==0) return n-1;
        return n;
    }
};