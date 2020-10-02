class Solution {
public:
    
    int bs(vector<int>& nums, int low, int high, int target)
    {
        int mid;
        while(low<high)
        {
            mid = low + (high-low)/2;
            if(nums[mid]<target) low = mid+1;
            else high = mid;
        }
        return high;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int a;
        a = bs(nums, 0, nums.size()-1, target);
        if(a>=nums.size() || nums[a]!=target) return {-1,-1};
        
        return {a, (bs(nums,0,nums.size(), target+1)-1)};
    }
};