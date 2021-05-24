vector<int> quartiles(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    int md, tm = arr.size(), mdQT1, mdQT3;
    md = (tm % 2 != 0 ? arr[tm / 2] : (arr[tm / 2] + arr[(tm / 2) - 1]) / 2);
    vector<int> qrt1, qrt2;
    for (int i = 0; i < tm; ++i)
        if (arr[i] < md)
            qrt1.push_back(arr[i]);
        else if (arr[i] > md)
            qrt2.push_back(arr[i]);

    int tm1 = qrt1.size(), tm2 = qrt2.size();
    mdQT1 = (tm1 % 2 != 0 ? qrt1[tm1 / 2] : (qrt1[tm1 / 2] + qrt1[(tm1 / 2) - 1]) / 2);
    mdQT3 = (tm2 % 2 != 0 ? qrt2[tm2 / 2] : (qrt2[tm2 / 2] + qrt2[(tm2 / 2) - 1]) / 2);

    return {mdQT1, md, mdQT3};
}