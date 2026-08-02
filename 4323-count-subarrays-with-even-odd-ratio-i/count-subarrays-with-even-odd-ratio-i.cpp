class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        vector<int>temp=nums;
        long long cnt=0;
        for(int i=0;i<n;i++){
            long long x=0,y=0;
            for(int j=i;j<n;j++){
                if(temp[j]%2==0){
                    x++;
                } else{
                    y++;
                } if(y>0 && x*(long long)b <= (long long)a*y){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};