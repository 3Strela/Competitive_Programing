#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }

    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i)
        cout << arr[i] << (i == n - 1 ? "\n" : " ");

    return 0;
}