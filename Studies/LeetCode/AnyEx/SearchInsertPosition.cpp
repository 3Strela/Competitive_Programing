class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int leftP = 0, rightP = nums.size() - 1;
        while (leftP <= rightP)
        {
            int midP = (leftP+rightP)/2;
            if (nums[midP] >= target)
                rightP = midP - 1;
            else
                leftP = midP + 1;
        }
        
        return leftP;
    }
};