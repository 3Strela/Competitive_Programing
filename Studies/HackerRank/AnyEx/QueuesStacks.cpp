#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    queue<int> fl;
    stack<int> pl;
    
    public:
        void pushCharacter(char ch)
        {
            pl.push(ch);
        }
    
        void enqueueCharacter(char ch)
        {
            fl.push(ch);
        }
    
        char popCharacter()
        {
            char ans = pl.top();
            pl.pop();
            
            return ans;
        }
    
        char dequeueCharacter()
        {
            char ans = fl.front();
            fl.pop();
            
            return ans;
        }
    
};