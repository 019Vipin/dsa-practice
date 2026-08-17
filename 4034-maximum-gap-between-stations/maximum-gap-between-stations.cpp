class Solution {
public:
    int maximumGap(string skill, string station) {
        int n=station.size();
        int m=skill.size();
        vector<int>left(m);
        vector<int>right(m);
        int j=0;
        for(int i=0;i<n;i++){
            if(station[i]==skill[j]){
                left[j]=i;
                j++;
                if(j==m)break;
            }
        }
         j=m-1;
        for(int i=n-1;i>=0;i--){
              if(station[i]==skill[j]){
                right[j]=i;
                j--;
                if(j<0)break;
            }
        }
        int res=0;
        for(int i=1;i<m;i++){
            res=max(res,right[i]-left[i-1]);
        }
        return res;
    }
};