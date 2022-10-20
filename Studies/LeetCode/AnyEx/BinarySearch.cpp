class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftP = 0, rightP = nums.size() - 1;
        
        while(leftP <= rightP)
        {
            int midP = (leftP+rightP) / 2;
            if (nums[midP] == target)
                return midP;
            else if(nums[midP] > target)
                rightP = midP - 1;
            else if(nums[midP] < target)
                leftP = midP + 1;
        }
        
        return -1;
    }
};