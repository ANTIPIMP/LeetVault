class Solution {
public:
    bool canPartition(vector<int>& nums) {
     int sum = 0;
     int mx = INT_MIN;
     for( int i : nums) {
        sum+=i;
        mx =max(mx,i);
     } 
     for ( int i : nums){
        if( i == sum - i) return true;
     }
     return false;
    }
};