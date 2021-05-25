/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template <class V>
void printArray(vector<V> v)
{

   for(auto x : v)
    cout << x << "\n";

}