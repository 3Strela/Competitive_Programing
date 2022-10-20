class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0, currSum = 0, maxElem = -10e5;
        
        for (int elem: nums)
        {
            currSum = max(0, currSum + elem);
            ans = max(ans, currSum);
            maxElem = max(maxElem, elem);
        }
        
        return (maxElem < 0 ? maxElem : ans);
    }
};