class Solution {
public:
    int countValidPrefixes(string s) {
        int c0=0,c1=0;
        int res=0;
        for(char c:s){
            if(c=='0') c0++;
            else c1++;
            if(abs(c0-c1)<=1)
                res++;
        }
        return res;
    }
};