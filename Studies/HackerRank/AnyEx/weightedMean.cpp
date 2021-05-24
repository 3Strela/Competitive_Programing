void weightedMean(vector<int> X, vector<int> W)
{
    int qt = 0, sm = 0;
    for (int i = 0; i < X.size(); ++i)
    {
        sm += X[i] * W[i];
        qt += W[i];
    }

    printf("%.1f\n", (float(sm) / qt));
}