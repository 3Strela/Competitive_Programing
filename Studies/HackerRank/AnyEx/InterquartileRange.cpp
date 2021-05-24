void interQuartile(vector<int> values, vector<int> freqs)
{
    vector<int> arr;
    for (int i = 0; i < values.size(); ++i)
        for (int j = 0; j < freqs[i]; ++j)
            arr.push_back(values[i]);

    sort(arr.begin(), arr.end());

    int tm = arr.size();
    double md, mdQT1, mdQT3;
    md = (tm % 2 != 0 ? arr[tm / 2] : (arr[tm / 2] + arr[(tm / 2) - 1]) / 2.0);

    vector<int> qrt1, qrt2;
    if (tm % 2 == 0)
    {
        for (int i = 0; i < tm; ++i)
            if (i < (tm / 2))
                qrt1.push_back(arr[i]);
            else
                qrt2.push_back(arr[i]);
    }
    else
        for (int i = 0; i < tm; ++i)
            if (i < (tm / 2) - 1)
                qrt1.push_back(arr[i]);
            else if (i > (tm / 2))
                qrt2.push_back(arr[i]);

    int tm1 = qrt1.size(), tm2 = qrt2.size();
    mdQT1 = (tm1 % 2 != 0 ? qrt1[tm1 / 2] : (qrt1[tm1 / 2] + qrt1[(tm1 / 2) - 1]) / 2.0);
    mdQT3 = (tm2 % 2 != 0 ? qrt2[tm2 / 2] : (qrt2[tm2 / 2] + qrt2[(tm2 / 2) - 1]) / 2.0);

    cout << setprecision(1) << fixed << floor(mdQT3 - mdQT1) << "\n";
}