#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s)
{
    stack<char> pilha;
    for (char i : s)
        if (i == '[' or i == '{' or i == '(')
            pilha.push(i);
        else if (!pilha.empty() and pilha.top() == '[' and i == ']')
            pilha.pop();
        else if (!pilha.empty() and pilha.top() == '{' and i == '}')
            pilha.pop();
        else if (!pilha.empty() and pilha.top() == '(' and i == ')')
            pilha.pop();
        else
            pilha.push('*');
            
    return (pilha.empty() ? "YES" : "NO");
}
