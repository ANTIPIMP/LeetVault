class Solution {
public:
    bool canPartition(vector<int>& nums) {
     int sum = 0;
     int mx = INT_MIN;
     for( int i : nums) {
        sum+=i;
        mx =max(mx,i);
     }  
    //  if( sum %2 != 0) return false;
     if( sum-mx == mx)   return true;
    //  if( sum-mx<mx ) return false;
     return false;
    }
};