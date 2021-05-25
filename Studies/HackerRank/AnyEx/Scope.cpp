	Difference (vector<int> sla)
    {
        elements = sla;
    }
    void computeDifference ()
    {
        sort(elements.begin(), elements.end());
        maximumDifference = elements[elements.size() - 1] - elements[0];
    }