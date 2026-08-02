class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long b=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int g=gcd(nums[i],nums[j]);
                long long s=(long long)(nums[i]/g)*(long long)(nums[j]/g);
                b=max(b,s);
            }
        }
        return b;
    }
};