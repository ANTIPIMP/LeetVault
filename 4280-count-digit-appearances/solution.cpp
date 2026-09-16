class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for ( int i : nums){
            while (i){
                int t = i%10;
                if(t == digit) ans++;
                i/=10;
            }
        }
        return ans;
    }
};