class Solution {
public:
     int n;
     int t[2][101][101];
    int solve_Alice(vector<int>& piles,int person,int i,int M){
        if(i>=n) return 0;
        if(t[person][i][M]!=-1) return t[person][i][M];
        int res=(person==1)?-1:INT_MAX;
        int stones=0;
        for(int x=1;x<=min(2*M,n-i);x++){
            stones+=piles[i+x-1];
            if(person==1){
                res=max(res,stones + solve_Alice(piles,0,i+x,max(M,x)));
            } else{
                res=min(res,solve_Alice(piles,1,i+x,max(M,x)));
            }
        }
        return t[person][i][M] = res;

    }
    int stoneGameII(vector<int>& piles) {
         n=piles.size();
         memset(t,-1,sizeof(t));
        return solve_Alice(piles,1,0,1);
    }
};