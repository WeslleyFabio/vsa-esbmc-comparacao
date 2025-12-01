#include <assert.h>

int index_of_min(const int *a, int n) {
    if (n <= 0) {
        // Handle invalid inputs to prevent out-of-bounds access
        return -1; // or any other sentinel value indicating error
    }
    
    int idx = 0;
    for (int i = 1; i < n; ++i) { // Change in loop condition: i < n instead of i <= n
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