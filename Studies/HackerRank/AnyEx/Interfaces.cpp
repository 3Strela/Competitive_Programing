class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int ans = n;
        
        for (int i = 1; i < n; ++i)
            if (n % i == 0)
                ans += i;
            
        return ans;
    }
};