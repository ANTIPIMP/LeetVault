class Solution {
public:
    int findNthDigit(int n) {
        string s = "";
        for( int i = 1; i<=n;i++){
            s +=to_string(i);
        }
        return s[n-1] -'0';
    }
};