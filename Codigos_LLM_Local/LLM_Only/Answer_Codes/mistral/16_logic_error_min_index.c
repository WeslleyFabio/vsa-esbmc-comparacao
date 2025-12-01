#include <assert.h>

int index_of_min(const int *a, int n) {
    int idx = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[idx]) {
            idx = i;
        }
    }
    return idx;
}

int main(void) {
    int v[3] = {5, 2, 9};
    int idx = index_of_min(v, 3);
    assert(idx == 1);
    return 0;
}