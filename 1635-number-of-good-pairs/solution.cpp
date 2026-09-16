class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans =0;
        vector<int>frq(101,0);
        for( int i : nums){
            frq[i]++;
        }
        for( int i : frq){
            if(i>=2){
                ans += i*(i-1);
            }
        }
        return ans/2;
    }
};