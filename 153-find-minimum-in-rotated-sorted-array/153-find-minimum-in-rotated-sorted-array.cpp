class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>=nums[0]){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        if(l==nums.size()){
            return nums[0];
        }
        return nums[l];
    }
};