#include <assert.h>

int index_of_min(const int *a, int n) {
    if (n < 1) return -1; // or any other invalid index value
    int idx = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= a && a[i] < a[idx]) { // changed condition to check array bounds
            idx = i;
        }
    }
    return idx == -1 ? -1 : idx; // handle invalid index case
}

int main(void) {
    int v[3] = {5, 2, 9};
    int idx = index_of_min(v, 3);
    assert(idx == 1);
    return 0;
}
