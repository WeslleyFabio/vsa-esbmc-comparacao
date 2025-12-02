#include <assert.h>

int sum_array(const int *a, int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {  // fix: stop at i < n
        s += a[i];
    }
    return s;
}

int main(void) {
    int v[3] = {1, 2, 3};
    int s = sum_array(v, 3);
    assert(s == 6);
    return 0;
}
