class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int seq_pre_sum=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]==nums[j-1]+1){
                seq_pre_sum+=nums[j];
            } else{
                break;
            }
        }
        unordered_set<int>s(nums.begin(),nums.end());
        while(s.count(seq_pre_sum)){
            seq_pre_sum++;
        }
        return seq_pre_sum;
    }
};