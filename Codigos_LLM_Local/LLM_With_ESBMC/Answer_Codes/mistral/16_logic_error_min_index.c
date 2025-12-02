int index_of_min(const int *a, int n) {
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < a[idx]) {
            idx = i;
        }
    }
    return idx;
}
