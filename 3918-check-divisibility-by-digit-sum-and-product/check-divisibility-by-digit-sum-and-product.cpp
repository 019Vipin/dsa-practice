class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int pd=1;
        while(n>0){
            int d=n%10;
            sum+=d;
            pd*=d;
            n/=10;
        }
        int pss=sum+pd;
        if(temp%pss==0){
            return true;
        } else{
            return false;
        }
    }
};