#include <assert.h>

int count_positive(const int *a, int n) {
    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            ++c;
        }
    }
    return c;
}

int main(void) {
    int v[3] = {1, -1, 2};
    int c = count_positive(v, 3);
    assert(c == 2);
    return 0;
}
