// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

typedef long long ll;

class Solution {
public:
    int firstBadVersion(int n) {
        int leftP = 1, rightP = n;
        while (leftP <= rightP)
        {
            ll midP = (ll(leftP)+ll(rightP))/2;
            if (isBadVersion(midP))
                rightP = midP - 1;
            else
                leftP = midP + 1;
        }
        
        return leftP;
    }
};