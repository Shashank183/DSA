class Solution {
public:
    int mirrorDistance(int n) {
        int reverse=0;
        int lastdigit;
        int z=n;
        while(n>0){
            lastdigit=n%10;
            reverse=reverse*10+lastdigit;
            n=n/10;
        }
        return abs(z - reverse);
        
    }
};