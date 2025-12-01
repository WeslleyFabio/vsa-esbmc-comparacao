#include <assert.h>

int get_value(int *a, int n, int index) {
    if (index >= 0 && index < n) { // Changed <= to <
        return a[index];
    }
    return -1; // Return an explicit error value instead of 0
}

int main(void) {
    int v[4] = {1, 2, 3, 4};
    int x = get_value(v, 4, 4);
    assert(x == -1); // Expect an out-of-bounds error
    return 0;
}