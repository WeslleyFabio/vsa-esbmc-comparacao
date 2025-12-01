#include <assert.h>

int sum_array(const int *a, int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
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
\\\`

**3) Why This Fix Works:**
The fix works by changing the loop condition from `i <= n` to `i < n`. This ensures that the loop only iterates up to but not including the array size `n`, thus preventing out-of-bounds access.

