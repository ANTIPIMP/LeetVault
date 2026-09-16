class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int v = n%8;
        if( n<=8) return n;
        if( v == 0) return n +v*8;
        if( n>8&&n<=16) return n+v;
        if( n>16&&n<=24) return n+8+v*2;
        return n+(8*3)+v*3;   
    }
};