class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> pgcd;
        long long ans = 0;
        int mx =0;

        for( int i = 0;i<nums.size();i++){
            mx = max(mx,nums[i]);
            int v = gcd( nums[i],mx);
            pgcd.push_back(v);
        }
        sort(pgcd.begin(),pgcd.end());

        if(pgcd.size()%2!=0) pgcd.erase(pgcd.begin() + pgcd.size()/2);
        int n = pgcd.size();
        for( int i = 0; i < n/2;i++){
            ans = ans + gcd(pgcd[i],pgcd[n-1-i] );
        }
    return ans;
    }
};