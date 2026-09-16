class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        for( int i =0;i<nums.size();i++){
            for( int j =i+1;abs(i-j)<=indexDiff;j++){
                    if(abs(nums[i] - nums[j]) <= valueDiff) return true;
            }
        }
        return false;
    }
};