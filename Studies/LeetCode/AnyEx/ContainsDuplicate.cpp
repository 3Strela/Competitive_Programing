class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int elem : nums)
            s.insert(elem);
        
        if (s.size() != nums.size())
            return true;
        return false;
    }
};