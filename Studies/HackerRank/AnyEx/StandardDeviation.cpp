void stdDev(vector<int> arr)
{
    double ans = 0.0, mean = 0.0;
    for (int i = 0; i < arr.size(); ++i)
        mean += arr[i];

    mean /= arr.size();

    for (int i = 0; i < arr.size(); ++i)
        ans += (arr[i] - mean) * (arr[i] - mean);

    cout << setprecision(1) << fixed << sqrt(ans / arr.size()) << "\n";
}