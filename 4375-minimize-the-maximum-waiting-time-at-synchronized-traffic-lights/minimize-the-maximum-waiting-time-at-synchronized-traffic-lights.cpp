class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int n=arrivalTime.size();
        int maxlight=INT_MIN;
        for(int i=0;i<lights.size();i++){
            maxlight=max(maxlight,lights[i]);
        }
        int mpp=INT_MIN;
        for(int i=0;i<n;i++){
            int x=arrivalTime[i];
            int r=x % period;
            int wt=INT_MAX;
            if(r<maxlight){
                 wt=0;
            } else{
                wt=period-r;
            }
        mpp=max(mpp,wt);
        }
        return mpp;
    }
};