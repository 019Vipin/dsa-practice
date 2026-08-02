class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n=tasks.size();
        int m=shifts.size();
        vector<int>t=tasks;
        vector<int>a(m);
        vector<long long>pr(n+1,0);
        for(int i=0;i<n;i++){
            pr[i+1]=pr[i]+t[i];
        }
        long long tot=pr[n];
        long long dne=0;
        for(int j=0;j<m;j++){
            long long ndne=dne+shifts[j];
            if(ndne>=tot){
               a[j]=0;
                dne=0;
            }else{
                int p=(int)(upper_bound(pr.begin(),pr.end(),ndne)-pr.begin())-1;
                a[j]=n-p;
                dne=ndne;
            }
                    }
        return a;
    }
};