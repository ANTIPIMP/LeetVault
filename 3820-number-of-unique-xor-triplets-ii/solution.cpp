class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int ans =0;
                int n = nums.size();

        if (n <= 2) return n;

        bool pair[2048] = {}; 
        bool can[2048] = {};



        for ( int i = 0; i<n;i++){
        for ( int j =0;j<n;j++){
                pair[nums[i] ^ nums[j]] = true; 
            }
        }

        for (int xorValue = 0; xorValue < 2048; xorValue++){
            for (int j = 0; j < n; j++){
                if (pair[xorValue]) {

            can[ xorValue ^ nums[j] ] = true;
            }
        }
        }
           

        for (int i = 0; i < 2048; i++) {
            if (can[i])
                ans++;
        }
            return ans;
    }
};